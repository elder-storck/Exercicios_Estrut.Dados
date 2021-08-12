#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"matriz.h"

//Tipo matriz (tipo opaco)
//Estrutura interna do tipo deve ser definida na implementação do TAD
struct matriz{
  int* mat_pt;
  int qtdlinha;
  int qtdcoluna;
};
  
Matriz* inicializaMatriz(int nlinhas, int ncolunas){
  if(nlinhas*ncolunas == 0) printf("\nErro funcao inicializa matriz:no de colunas ou linhas nula\n");
  
  Matriz* matriz_st = (Matriz*)malloc(sizeof(Matriz));
  matriz_st->mat_pt = (int*)malloc(nlinhas* ncolunas * sizeof(int));
  matriz_st->qtdlinha = nlinhas;
  matriz_st->qtdcoluna = ncolunas;
  
  return matriz_st;
}

void modificaElemento (Matriz* mat, int linha, int coluna, int elem){
  if(mat->qtdlinha < linha || mat->qtdcoluna < coluna){
    printf("\nErro ao Modificar matriz[%d][%d]\n",linha,coluna);
    return ;  
  }
  //mat[i][j] = mat i*n +j
  (mat->mat_pt[(linha * (mat->qtdcoluna))+coluna])= elem;
  return;
}

int recuperaElemento(Matriz* mat, int linha, int coluna){
  if(mat->qtdlinha < linha || mat->qtdcoluna < coluna){
    printf("\nErro ao recuperar elemento [%d][%d]\n",linha,coluna);
    return mat->mat_pt[(linha*mat->qtdcoluna)+coluna];  
  }
  return mat->mat_pt[(linha*mat->qtdcoluna)+coluna];
}

int recuperaNColunas (Matriz* mat){
  return mat->qtdcoluna;
}

int recuperaNLinhas (Matriz* mat){
  return mat->qtdlinha;
}

Matriz* transposta(Matriz* mat){
  Matriz* mtransp_st = inicializaMatriz(mat->qtdcoluna ,mat->qtdlinha);
  int i=0,j=0,aux=0;
  for(i=0; i < mat->qtdlinha ;i++){
    for(j=0 ; j < mat->qtdcoluna ;j++){
      aux = recuperaElemento(mat,i,j);
      modificaElemento(mtransp_st,j,i,aux);


      //mtransp_st->mat_pt[j*mat->qtdcoluna+i] = mat->mat_pt[i*mat->qtdlinha+j];
    }
  }
  return mtransp_st;
}


Matriz* multiplicacao(Matriz* mat1, Matriz* mat2){
  if(mat1->qtdcoluna != mat2->qtdlinha)printf("\nErro:Multiplicação invalida\n");

  Matriz* matmup_st = inicializaMatriz(mat1->qtdlinha ,mat2->qtdcoluna);

  int i=0,j=0,acumula =0,linha,coluna;
  
  for(linha=0;linha < mat1->qtdlinha;linha++){
    for(coluna=0;coluna<mat2->qtdcoluna;coluna++){
      acumula =0;
      for(i=0;i < mat1->qtdcoluna;i++){
        acumula = acumula + recuperaElemento(mat1,linha,i)*recuperaElemento(mat2,i,coluna);
        
        //mat1[linha][i]*mat2[i][coluna];
      }
      modificaElemento(matmup_st,linha,coluna,acumula);
      //mat3[linha][coluna]=acumula;
    }
  }
   return matmup_st;   
}


void imprimeMatriz(Matriz* mat){
  printf("\n");
  printf("[");
  for(int i=0;i<(mat->qtdlinha * mat->qtdcoluna);i++){
    if(i % mat->qtdcoluna == 0&& i!=0)printf("\n");
    printf("%d, ",mat->mat_pt[i]);

  }
  printf("]\n\n");
}


void destroiMatriz(Matriz* mat){
  free(mat->mat_pt);
  free(mat);
}