// 0 preto, 1 vermelho, 2 verde, 3 amarelo , 4 azul, 5 Rosa , 6 azul fraco, 7 branco , 8 preto

void telaFundo(int cor)
{
  //30 linhas por 50 colunas
     memset (&message [verticalLines - 1] [0], cor << 4, horizontalBytes);
}


// 0 preto, 1 vermelho, 2 verde, 3 amarelo , 4 azul, 5 Rosa , 6 azul fraco, 7 branco , 8 preto
void volte()
{
  int corTela = 1;
  int corFonte = 7;
  telaFundo(corTela);

imprimeV(8, 21, corFonte, corTela);
imprimeO(15, 21, corFonte, corTela); 
imprimeL(22, 21, corFonte, corTela); 
imprimeT(29, 21, corFonte, corTela); 
imprimeE(36, 21, corFonte, corTela); 

}
// 0 preto, 1 vermelho, 2 verde, 3 amarelo , 4 azul, 5 Rosa , 6 azul fraco, 7 branco , 8 preto
void entre()
{
  int corTela = 3;
  int corFonte = 4;
  telaFundo(corTela);

imprimeE(9, 21, corFonte, corTela);
imprimeN(15, 21, corFonte, corTela); 
imprimeT(22, 21, corFonte, corTela); 
imprimeR(29, 21, corFonte, corTela); 
imprimeE(36, 21, corFonte, corTela); 

}

void arCond()
{
  int corTela = 4;
  int corFonte = 3;
  telaFundo(corTela);

imprimeA(3, 21, corFonte, corTela);
imprimeR(10, 21, corFonte, corTela); 
imprimeC(20, 21, corFonte, corTela); 
imprimeO(26, 21, corFonte, corTela); 
imprimeN(33, 21, corFonte, corTela); 
imprimeD(40, 21, corFonte, corTela);
//imprimePonto(47, 21, corFonte, corTela);

}




// 0 preto, 1 vermelho, 2 verde, 3 amarelo , 4 azul, 5 Rosa , 6 azul fraco, 7 branco , 8 preto
void hora1()
{
  int corTela = 7;
  int corFonte = 1;
  telaFundo(corTela);

imprime1(4, 21,corFonte, corTela); 
imprime3(9, 21, corFonte, corTela); 
imprime2pontos(15, 21, corFonte, corTela); 
imprime3(18, 21, corFonte, corTela); 
imprimeO(24, 21, corFonte, corTela); 
imprimeH(33, 21, corFonte, corTela); 
imprimeS(40, 21, corFonte, corTela); 
}
// 0 preto, 1 vermelho, 2 verde, 3 amarelo , 4 azul, 5 Rosa , 6 azul fraco, 7 branco , 8 preto
void hora2()
{
  int corTela = 7;
  int corFonte = 1;
  telaFundo(corTela);
  
imprime8(8, 21, corFonte, corTela); 
imprime2pontos(15, 21, corFonte, corTela); 
imprime3(18, 21, corFonte, corTela); 
imprimeO(24, 21, corFonte, corTela); 
imprimeH(33, 21, corFonte, corTela); 
imprimeS(40, 21, corFonte, corTela); 
}


// 0 preto, 1 vermelho, 2 verde, 3 amarelo , 4 azul, 5 Rosa , 6 azul fraco, 7 branco , 8 preto
void fechado()
{
  int corTela = 7;
  int corFonte = 1;
  telaFundo(corTela);
  
imprimeF(3, 21, corFonte, corTela); 
imprimeE(9, 21, corFonte, corTela); 
imprimeC(15, 21, corFonte, corTela); 
imprimeH(21, 21, corFonte, corTela); 
imprimeA(28, 21, corFonte, corTela); 
imprimeD(35, 21, corFonte, corTela); 
imprimeO(42, 21, corFonte, corTela); 
}



// 0 preto, 1 vermelho, 2 verde, 3 amarelo , 4 azul, 5 Rosa , 6 azul fraco, 7 branco , 8 preto
void aberto()
{

  int corTela = 3;
  int corFonte = 4;
  telaFundo(corTela);
 
imprimeA(5, 21, corFonte, corTela); 
imprimeB(12, 21, corFonte, corTela); 
imprimeE(19, 21, corFonte, corTela); 
imprimeR(25, 21, corFonte, corTela); 
imprimeT(32, 21, corFonte, corTela); 
imprimeO(39, 21, corFonte, corTela); 
 
}






