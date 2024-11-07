void linha(int inix,int fimx, int iniy, int fimy, int cor)
{
    memset (&message [iniy - 1] [inix], cor << 4, fimx-inix+1);
    memset (&message [fimy -2] [inix], 14 << 4, fimx-inix+1); 
    
}
   
  
// 0 e 1 - preto, 2 e 3 vermelho, 4 e 5 - azul, 6 e 7 - rosa, 8 e 9 - verde, 10 e 11 amarelo, 12 e 13 - azul fraco, 14 e 15 - branco

void telabranca()
{
  //30 linhas por 50 colunas
     memset (&message [verticalLines - 1] [0], 14 << 4, horizontalBytes);
}


//dizer a posição inicial de baixo

void imprimeF(int posH, int posV, int cor)  // exemplo na posicao vem h=21 v=3 cor é 4  tamanho =13
{
linha(posH, posH + 1, posV, posV - 13, cor);//subida do F
linha(posH + 2, posH + 3, posV - 6, posV - 7, cor);//tracinho de baixo do F
linha(posH + 2, posH + 4, posV - 12, posV - 13, cor);//tracinho de baixo do F
}

void fechado()
{

imprimeF(3, 21, 4);

linha(9, 10, 21, 8, 4);//subida do E
linha(11, 13, 21, 20, 4);//do E
linha(11, 12, 15, 14, 4);//do E
linha(11, 13, 9, 8, 4);// do E 

linha(15, 16, 21, 8, 4);//subida do C
linha(17, 19, 21, 20, 4);//do C
linha(17, 19, 9, 8, 4);// do C 

linha(21, 22, 21, 8, 4);//subida do H
linha(23, 24, 15, 14, 4);//do H
linha(25, 26, 21, 8, 4);//subida do H
//A
linha(28, 28, 21, 9, 4);
linha(29, 29, 21, 8, 4);
linha(30, 31, 15, 14, 4);
linha(30, 31, 9, 8, 4);
linha(32, 32, 21, 8, 4);
linha(33, 33, 21, 9, 4);
//D
linha(35, 36, 21, 8, 4);
linha(37, 38, 21, 20, 4);
linha(37, 38, 9, 8, 4);
linha(39, 39, 21, 8, 4);
linha(40, 40, 20, 9, 4);

//O
linha(42, 42, 20, 9, 4);
linha(43, 43, 21, 8, 4);
linha(44, 45, 21, 20, 4);
linha(44, 45, 9, 8, 4);
linha(46, 46, 21, 8, 4);
linha(47, 47, 20, 9, 4);

}


void aberto()
{
 
//A
linha(5, 5, 21, 9, 4);
linha(6, 6, 21, 8, 4);
linha(7, 8, 15, 14, 4);
linha(7, 8, 9, 8, 4);
linha(9, 9, 21, 8, 4);
linha(10, 10, 21, 9, 4);

//B
linha(12, 13, 21, 8, 4);
linha(14, 15, 21, 20, 4);
linha(14, 15, 15, 14, 4);
linha(14, 15, 9, 8, 4);
linha(16, 16, 21, 8, 4);
linha(17, 17, 20, 15, 4);
linha(17, 17, 13, 9, 4);

//E
linha(19, 20, 21, 8, 4);//subida do E
linha(21, 23, 21, 20, 4);//do E
linha(21, 22, 15, 14, 4);//do E
linha(21, 23, 9, 8, 4);// do E 


//R
linha(25, 26, 21, 8, 4);
linha(27, 27, 15, 14, 4);
linha(28, 28, 16, 14, 4);
linha(27, 28, 9, 8, 4);
linha(29, 29, 21, 8, 4);
linha(30, 30, 21, 17, 4);
linha(30, 30, 13, 9, 4);

//T

linha(34, 35, 21, 10, 4);
linha(32, 37, 9, 8, 4);


//O
linha(39, 39, 20, 9, 4);
linha(40, 40, 21, 8, 4);
linha(41, 42, 21, 20, 4);
linha(41, 42, 9, 8, 4);
linha(43, 43, 21, 8, 4);
linha(44, 44, 20, 9, 4);
 
}

