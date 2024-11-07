int tela=0;
int seta=0;
int tempo=0;

void advanceLine ()
  {
   memmove (& message [0] [0], & message [1] [0], sizeof message - horizontalBytes);  

if (!digitalRead(13) and !seta)
{
   tela++;
   seta=1;
}


int t1=150;
int t2=300;
int t3=450;


if (digitalRead(13)) seta=0;

if (tela>=3) tela=0;

if (tela==0)
{
  tempo++;
  if (tempo<t1) aberto();
  else if (tempo>t1 and tempo<t2) arCond();
  else entre();
  if (tempo>t3) tempo = 0;
   
}

  if (tela==1)
  {
    tempo++;
    if (tempo<t1) fechado();
    else if (tempo>t1 and tempo<t2) volte();
    else hora1();
    if (tempo>t3) tempo = 0;
  }


  if (tela==2) 
  {
    tempo++;
    if (tempo<t1) fechado();
    else if (tempo>t1 and tempo<t2) volte();
    else hora2();
    if (tempo>t3) tempo = 0;
  }

}


// draw a single scan line
boolean doOneScanLine ()
  {
    
  // after vsync we do the back porch
  if (backPorchLinesToGo > 0)
    {
    backPorchLinesToGo--;
    return false;   
    }  // end still doing back porch
    
  // if all lines done, do the front porch
  if (vLine == verticalPixels)
    return newFrame;
    
  // pre-load pointer for speed
  register char * messagePtr =  & (message [messageLine] [0] );

  delayMicroseconds (1);
  
  // how many pixels to send
  register byte i = horizontalBytes;

  // blit pixel data to screen    
  while (i--)
    PORTD = * messagePtr++;

  // stretch final pixel
  nop; nop; nop;
  
  PORTD = 0;  // back to black
  // finished this line 
  vLine++;

  // every 16 pixels it is time to move to a new line in our text
  if ((vLine & 0xF) == 0)
    messageLine++;
    
  return false;
  }  // end of doOneScanLine

