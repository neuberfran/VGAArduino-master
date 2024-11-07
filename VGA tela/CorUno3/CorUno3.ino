

#include <TimerHelpers.h>
#include <avr/sleep.h>

const byte hSyncPin = 3;     // <------- HSYNC

const byte redPin = 4;       // <------- Red pixel data
const byte greenPin = 5;     // <------- Green pixel data
const byte bluePin = 6;      // <------- Blue pixel data

const byte vSyncPin = 10;    // <------- VSYNC

const int horizontalBytes = 50;  // 480 pixels wide - 50
const int verticalPixels = 480;  // 480 pixels high

// Timer 1 - Vertical sync

// However in practice, it we can only pump out pixels at 375 nS each because it
//  takes 6 clock cycles to read one in from RAM and send it out the port.

const int verticalLines = verticalPixels / 16;  
const int horizontalPixels = horizontalBytes * 8;

const byte verticalBackPorchLines = 35;  // includes sync pulse?
const int verticalFrontPorchLines = 525 - verticalBackPorchLines;

volatile int vLine;
volatile int messageLine;
volatile int backPorchLinesToGo;
volatile byte newFrame;

#define nop asm volatile ("nop\n\t")

// bitmap - gets sent to PORTD
// For D4/D5/D6 bits need to be shifted left 4 bits
//  ie. 00BGR0000

char message [verticalLines]  [horizontalBytes];

// ISR: Vsync pulse
ISR (TIMER1_OVF_vect)
  {
  vLine = 0; 
  messageLine = 0;
  backPorchLinesToGo = verticalBackPorchLines;
  newFrame = true;
  } // end of TIMER1_OVF_vect
  
// ISR: Hsync pulse ... this interrupt merely wakes us up
ISR (TIMER2_OVF_vect)
  {
  backPorchLinesToGo--;    
  } // end of TIMER2_OVF_vect


void setup()
  {
pinMode(13, INPUT_PULLUP);
   
    int y, x;
  Serial.begin(9600);
  // initial bitmap ... change to suit
  for (y = 0; y < verticalLines; y++)
    for (x = 0; x < horizontalBytes; x++)
      message [y] [x] = (7) << 4;
   
  // disable Timer 0
  TIMSK0 = 0;  // no interrupts on Timer 0
  OCR0A = 0;   // and turn it off
  OCR0B = 0;
  
  // Timer 1 - vertical sync pulses
  pinMode (vSyncPin, OUTPUT); 
  Timer1::setMode (15, Timer1::PRESCALE_1024, Timer1::CLEAR_B_ON_COMPARE);
  OCR1A = 259;  // 16666 / 64 uS = 260 (less one)
  OCR1B = 0;    // 64 / 64 uS = 1 (less one)
  TIFR1 = bit (TOV1);   // clear overflow flag
  TIMSK1 = bit (TOIE1);  // interrupt on overflow on timer 1

  // Timer 2 - horizontal sync pulses
  pinMode (hSyncPin, OUTPUT); 
  Timer2::setMode (7, Timer2::PRESCALE_8, Timer2::CLEAR_B_ON_COMPARE);
  OCR2A = 63;   // 32 / 0.5 uS = 64 (less one)
  OCR2B = 7;    // 4 / 0.5 uS = 8 (less one)
  TIFR2 = bit (TOV2);   // clear overflow flag
  TIMSK2 = bit (TOIE2);  // interrupt on overflow on timer 2
 
  // prepare to sleep between horizontal sync pulses  
  set_sleep_mode (SLEEP_MODE_IDLE);  
  
  // pins for outputting the colour information
  pinMode (redPin, OUTPUT);
  pinMode (greenPin, OUTPUT);
  pinMode (bluePin, OUTPUT);


}  // end of setup


  
void loop() 
  {

  // loop to avoid overhead of function call
  while (true)
    {
    // sleep to ensure we start up in a predictable way
    sleep_mode ();
    if (doOneScanLine ())
      advanceLine ();
    }  // end of while
 }  // end of loop
