/*testador.c: Este arquivo contém a main que deve testar o seu TAD Lista de Matrizes. Deve-se fazer o seguinte:


#include <stdio.h>
#include <stdlib.h>
#include "listaMat.h"

#define NLINHAS 3
#define NCOLUNAS 4

int main(void) {
  int i, j;

  Matriz* mat0;
  mat0 = inicializaMatriz(NLINHAS, NCOLUNAS);
  for (i=0;i<NLINHAS;i++)
    for (j=0;j<NCOLUNAS; j++)
      modificaElemento(mat0, i, j,i+j);

  Matriz* mat1;
  mat1 = inicializaMatriz(NLINHAS, NCOLUNAS);
  for (i=0;i<NLINHAS;i++)
    for (j=0;j<NCOLUNAS; j++)
      modificaElemento(mat1, i, j,i+j+4);
  
  Matriz* mat2;
  mat2 = inicializaMatriz(NLINHAS, NCOLUNAS);
  for (i=0;i<NLINHAS;i++)
    for (j=0;j<NCOLUNAS; j++)
      modificaElemento(mat2, i, j,i+j+8);
    
  Matriz* mat3;
  mat3 = inicializaMatriz(NLINHAS, NCOLUNAS);
  for (i=0;i<NLINHAS;i++)
    for (j=0;j<NCOLUNAS; j++)
      modificaElemento(mat3, i, j,i+j+12);

  Lista* lista1 = criaLista();
  insereNaLista(mat0,lista1);
  insereNaLista(mat1,lista1);
  insereNaLista(mat2,lista1);
  insereNaLista(mat3,lista1);
  
  Matriz* trp0 = transposta(mat0);
  Matriz* trp1 = transposta(mat1);
  Matriz* trp2 = transposta(mat2);
  Matriz* trp3 = transposta(mat3);

  Lista* lista2 = criaLista();
  insereNaLista(trp0,lista2);
  insereNaLista(trp1,lista2);
  insereNaLista(trp2,lista2);
  insereNaLista(trp3,lista2);

  printf("\n\nLista1 \n\n");
  imprimeLista(lista1);
  printf("\n\nLista2 \n\n");
  imprimeLista(lista2);

  printf("\n\nRetirou da Lista1: posicao 0 e posicao 3 \n");
  retiraDaLista(lista1,0);
  retiraDaLista(lista1,3);
  printf("Retirou da Lista2: posicao 2 \n\n");
  retiraDaLista(lista2,2);

  printf("\n\nLista1 \n\n");
  imprimeLista(lista1);
  printf("\n\nLista2 \n\n");
  imprimeLista(lista2);

  insereNaLista(mat0,lista1);
  insereNaLista(mat3,lista1);
  insereNaLista(trp2,lista2);
  
  printf("\n\nLista1 \n\n");
  imprimeLista(lista1);
  printf("\n\nLista2 \n\n");
  imprimeLista(lista2);

  liberaLista(lista1);
  liberaLista(lista2);

  destroiMatriz(mat0);
  destroiMatriz(mat1);
  destroiMatriz(mat2);
  destroiMatriz(mat3);

  destroiMatriz(trp0);
  destroiMatriz(trp1);
  destroiMatriz(trp2);
  destroiMatriz(trp3);

}
*/