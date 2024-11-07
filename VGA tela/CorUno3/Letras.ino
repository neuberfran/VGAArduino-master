

void linha(int inix,int fimx, int iniy, int fimy, int corFonte, int corTela)
{
    memset (&message [iniy - 1] [inix], corFonte << 4, fimx-inix+1);
    memset (&message [fimy -2] [inix], corTela << 4, fimx-inix+1); 
    
}



void imprime1(int posH, int posV, int corFonte, int corTela)  // exemplo na posicao vem h=21 v=3 cor é 4  tamanho =13
{
linha(posH, posH + 3, posV, posV - 1, corFonte, corTela);//tracinho de baixo do F
linha(posH, posH, posV - 12, posV - 12, corFonte, corTela);//subida do F
linha(posH + 1, posH + 2, posV - 2, posV - 13, corFonte, corTela);//tracinho de baixo do F
}

void imprime3(int posH, int posV, int corFonte, int corTela)  // exemplo na posicao vem h=21 v=3 cor é 4  tamanho =13
{

linha(posH, posH + 2, posV, posV - 1, corFonte, corTela);//tracinho de baixo do 
linha(posH + 1, posH + 2, posV - 6, posV - 7, corFonte, corTela);//tracinho de baixo do 
linha(posH , posH + 2, posV - 12, posV - 13, corFonte, corTela);//tracinho de baixo do 
linha(posH + 3, posH + 4, posV, posV - 13, corFonte, corTela);//subida 
}

void imprime8(int posH, int posV, int corFonte, int corTela)  // exemplo na posicao vem h=21 v=3 cor é 4  tamanho =13
{
linha(posH, posH, posV - 1 , posV - 5, corFonte, corTela);//subida   
linha(posH, posH, posV - 8, posV - 12, corFonte, corTela);//subida 
linha(posH + 1, posH + 1, posV, posV - 13, corFonte, corTela);//subida 
linha(posH + 2, posH + 3, posV, posV - 1, corFonte, corTela);//subida
linha(posH + 2, posH + 3, posV -6, posV - 7, corFonte, corTela);//subida
linha(posH + 2, posH + 3, posV -12, posV - 13, corFonte, corTela);//subida
linha(posH + 4, posH + 4, posV, posV - 13, corFonte, corTela);//subida 
linha(posH + 5, posH + 5, posV -1, posV - 5, corFonte, corTela);//subida 
linha(posH + 5, posH + 5, posV -8, posV - 12, corFonte, corTela);//subida 
}

void imprime2pontos(int posH, int posV, int corFonte, int corTela)  // exemplo na posicao vem h=21 v=3 cor é 4  tamanho =13
{

linha(posH, posH + 1, posV - 4, posV - 5, corFonte, corTela);//tracinho de baixo do 
linha(posH, posH + 1, posV - 7, posV - 8, corFonte, corTela);//tracinho de baixo do
}

void imprimePonto(int posH, int posV, int corFonte, int corTela)  // exemplo na posicao vem h=21 v=3 cor é 4  tamanho =13
{
linha(posH, posH + 1, posV, posV - 1, corFonte, corTela);//tracinho de baixo do 
}

void imprimeS(int posH, int posV, int corFonte, int corTela)  // exemplo na posicao vem h=21 v=3 cor é 4  tamanho =13
{

linha(posH, posH + 4, posV, posV - 1, corFonte, corTela);//subida 
linha(posH + 3, posH + 4, posV - 2, posV - 5, corFonte, corTela);//subida 
linha(posH, posH + 4, posV - 6, posV - 7, corFonte, corTela);//subida 
linha(posH, posH + 1, posV - 8, posV - 11, corFonte, corTela);//subida 
linha(posH, posH + 4, posV - 12, posV - 13, corFonte, corTela);//subida 
 
}

void imprimeF(int posH, int posV, int corFonte, int corTela)  // exemplo na posicao vem h=21 v=3 cor é 4  tamanho =13
{
linha(posH, posH + 1, posV, posV - 13, corFonte, corTela);//subida do F
linha(posH + 2, posH + 3, posV - 6, posV - 7, corFonte, corTela);//tracinho de baixo do F
linha(posH + 2, posH + 4, posV - 12, posV - 13, corFonte, corTela);//tracinho de baixo do F
}

void imprimeE(int posH, int posV, int corFonte, int corTela)  // exemplo na posicao vem h=21 v=3 cor é 4  tamanho =13
{
linha(posH, posH + 1, posV, posV - 13, corFonte, corTela);//subida 
linha(posH + 2, posH + 4, posV, posV - 1, corFonte, corTela);//tracinho de baixo do 
linha(posH + 2, posH + 3, posV - 6, posV - 7, corFonte, corTela);//tracinho de baixo do 
linha(posH + 2, posH + 4, posV - 12, posV - 13, corFonte, corTela);//tracinho de baixo do 

}

void imprimeC(int posH, int posV, int corFonte, int corTela)  // exemplo na posicao vem h=21 v=3 cor é 4  tamanho =13
{
linha(posH, posH + 1, posV, posV - 13, corFonte, corTela);//subida 
linha(posH + 2, posH + 4, posV , posV - 1, corFonte, corTela);//tracinho de baixo do 
linha(posH + 2, posH + 4, posV - 12, posV - 13, corFonte, corTela);//tracinho de baixo do 

}

void imprimeA(int posH, int posV, int corFonte, int corTela)  // exemplo na posicao vem h=21 v=3 cor é 4  tamanho =13
{
linha(posH, posH, posV, posV - 12, corFonte, corTela);//subida 
linha(posH + 1, posH + 1, posV, posV - 13, corFonte, corTela);//subida 
linha(posH + 2, posH + 3, posV -6, posV - 7, corFonte, corTela);//subida
linha(posH + 2, posH + 3, posV -12, posV - 13, corFonte, corTela);//subida
linha(posH + 4, posH + 4, posV, posV - 13, corFonte, corTela);//subida 
linha(posH + 5, posH + 5, posV, posV - 12, corFonte, corTela);//subida 
}

void imprimeB
(int posH, int posV, int corFonte, int corTela)  // exemplo na posicao vem h=21 v=3 cor é 4  tamanho =13
{
linha(posH, posH + 1, posV, posV - 13, corFonte, corTela);//subida 
linha(posH + 2, posH + 3, posV, posV - 1, corFonte, corTela);//subida
linha(posH + 2, posH + 3, posV -6, posV - 7, corFonte, corTela);//subida
linha(posH + 2, posH + 3, posV -12, posV - 13, corFonte, corTela);//subida
linha(posH + 4, posH + 4, posV, posV - 13, corFonte, corTela);//subida 
linha(posH + 5, posH + 5, posV -1, posV - 5, corFonte, corTela);//subida 
linha(posH + 5, posH + 5, posV -8, posV - 12, corFonte, corTela);//subida 
}


void imprimeR
(int posH, int posV, int corFonte, int corTela)  // exemplo na posicao vem h=21 v=3 cor é 4  tamanho =13
{
linha(posH, posH + 1, posV, posV - 13, corFonte, corTela);//subida 
linha(posH + 2, posH + 3, posV -6, posV - 7, corFonte, corTela);//subida
linha(posH + 2, posH + 3, posV -12, posV - 13, corFonte, corTela);//subida
linha(posH + 4, posH + 4, posV, posV - 13, corFonte, corTela);//subida 
linha(posH + 5, posH + 5, posV, posV - 5, corFonte, corTela);//subida 
linha(posH + 5, posH + 5, posV -8, posV - 12, corFonte, corTela);//subida 
}

void imprimeH(int posH, int posV, int corFonte, int corTela)  // exemplo na posicao vem h=21 v=3 cor é 4  tamanho =13
{
linha(posH, posH + 1, posV, posV - 13, corFonte, corTela);//subida 
linha(posH + 2, posH + 3, posV - 6, posV - 7, corFonte, corTela);//tracinho de baixo do 
linha(posH + 4, posH + 5, posV, posV - 13, corFonte, corTela);//subida 

}

void imprimeO(int posH, int posV, int corFonte, int corTela)  // exemplo na posicao vem h=21 v=3 cor é 4  tamanho =13
{
linha(posH, posH, posV - 1, posV - 12, corFonte, corTela);//subida 
linha(posH + 1, posH + 1, posV, posV - 13, corFonte, corTela);//subida 
linha(posH + 2, posH + 3, posV, posV - 1, corFonte, corTela);//subida
linha(posH + 2, posH + 3, posV -12, posV - 13, corFonte, corTela);//subida
linha(posH + 4, posH + 4, posV, posV - 13, corFonte, corTela);//subida 
linha(posH + 5, posH + 5, posV -1, posV - 12, corFonte, corTela);//subida 
}

void imprimeD(int posH, int posV, int corFonte, int corTela)  // exemplo na posicao vem h=21 v=3 cor é 4  tamanho =13
{
linha(posH, posH + 1, posV, posV - 13, corFonte, corTela);//subida 
linha(posH + 2, posH + 3, posV, posV - 1, corFonte, corTela);//subida
linha(posH + 2, posH + 3, posV -12, posV - 13, corFonte, corTela);//subida
linha(posH + 4, posH + 4, posV, posV - 13, corFonte, corTela);//subida 
linha(posH + 5, posH + 5, posV -1, posV - 12, corFonte, corTela);//subida 
}

void imprimeT(int posH, int posV, int corFonte, int corTela)  // exemplo na posicao vem h=21 v=3 cor é 4  tamanho =13
{
linha(posH + 2, posH + 3, posV, posV - 11, corFonte, corTela);//subida 
linha(posH, posH + 5, posV -12, posV - 13, corFonte, corTela);//subida
}

void imprimeL(int posH, int posV, int corFonte, int corTela)  // exemplo na posicao vem h=21 v=3 cor é 4  tamanho =13
{
linha(posH, posH + 5, posV, posV - 1, corFonte, corTela);//subida
linha(posH, posH + 1, posV-2, posV - 13, corFonte, corTela);//subida 

}

void imprimeN(int posH, int posV, int corFonte, int corTela)  // exemplo na posicao vem h=21 v=3 cor é 4  tamanho =13
{
linha(posH, posH, posV, posV - 13, corFonte, corTela);//subida
linha(posH + 1, posH + 1, posV - 8, posV - 11, corFonte, corTela);//subida
linha(posH + 2, posH + 2, posV - 6, posV - 9, corFonte, corTela);//subida
linha(posH + 3, posH + 3, posV - 4, posV - 7, corFonte, corTela);//subida
linha(posH + 4, posH + 4, posV - 2, posV - 5, corFonte, corTela);//subida
linha(posH + 5, posH + 5, posV, posV - 13, corFonte, corTela);//subida
 
}

void imprimeV(int posH, int posV, int corFonte, int corTela)  // exemplo na posicao vem h=21 v=3 cor é 4  tamanho =13
{
linha(posH, posH, posV - 5, posV - 13, corFonte, corTela);//subida
linha(posH + 1, posH + 1, posV - 2, posV - 9, corFonte, corTela);//subida
linha(posH + 2, posH + 3, posV, posV - 4, corFonte, corTela);//subida
linha(posH + 4, posH + 4, posV - 2, posV - 9, corFonte, corTela);//subida
linha(posH + 5, posH + 5
, posV - 5, posV - 13, corFonte, corTela);//subida
 
}

