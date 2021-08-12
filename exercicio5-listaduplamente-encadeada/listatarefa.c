#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"listatarefa.h"

struct celula{
  Tarefa* data;
  Celula* prox;
  Celula* ant;
};

/*****************************************************************/

Celula* criaLista(){
  return NULL;
}

/*****************************************************************/

Celula* insereNaLista(Celula* prim_celula,Tarefa* tarefa){
  Celula* celulanova = (Celula*)malloc(sizeof(Celula));

    celulanova->data = tarefa;

    celulanova->ant = NULL;
    celulanova->prox = prim_celula;//prox = null
    
    //lista um so ou caso normal
    if(prim_celula != NULL)prim_celula->ant = celulanova;
   
    return celulanova;
  
}

/*****************************************************************/

Celula* DevolveUltimoElemento(Celula* prim_celula){
  Celula* celula_aux;
  //caso vazio
  if(prim_celula == NULL) return prim_celula;
  //caso comun
  celula_aux = prim_celula;
  while(celula_aux->prox != NULL){
    celula_aux = celula_aux->prox;
  }
  return celula_aux;
}

/*****************************************************************/

int DevolveQuantidadeElemento(Celula* prim_celula){
  int i;
  Celula* celula_aux;
  //caso vazio
  if(prim_celula == NULL) return 0;
  //caso comun
  celula_aux = prim_celula;
  i=0;
  while(celula_aux != NULL){
    celula_aux = celula_aux->prox;
    i++;
  }

  return i;
}

/*****************************************************************/

Celula* devolveElem_NaPosicao(Celula* prim_celula,int posicao){
  
  int i;
  Celula* celula_aux;
  
  //lista vazia
  if(prim_celula == NULL) return NULL;
  //lista normal
  celula_aux = prim_celula;
  for(i=0;i<posicao;i++){
    if(celula_aux->prox != NULL){
     celula_aux = celula_aux->prox;
    }
  }
  return celula_aux;
}

/*****************************************************************/

Celula* retiraDaLista(Celula* prim_celula,int posicao){
  if(posicao > DevolveQuantidadeElemento(prim_celula))return prim_celula;
  Celula* celula_aux;
  //lista vazia
  if(prim_celula == NULL) return NULL;
  //lista primeiro
  if(posicao == 0){
    celula_aux = prim_celula->prox;
    celula_aux->ant = NULL;
    free(prim_celula);
    return celula_aux;
  }

  //lista normal
  celula_aux = devolveElem_NaPosicao(prim_celula,posicao);
  celula_aux->ant->prox = celula_aux->prox;
  free(celula_aux);
  return prim_celula;

}

/*****************************************************************/

void liberaLista(Celula* prim_celula){
  int i=0,qtd_elem = DevolveQuantidadeElemento(prim_celula);
  
  for(i=(qtd_elem-1);i>0;i--){
    retiraDaLista(prim_celula,i);
  }
}

/*****************************************************************/

void imprimeLista(Celula* prim_celula){
  Celula* celula_aux = prim_celula;
  //lista vazia
  if(prim_celula == NULL){
    printf("\nLista Vazia\n");
    return ;
  }
  //lista um so 
  if(prim_celula->prox == NULL){
    imprimeTarefa(prim_celula->data);
    return ;
  }
  //mais de um
  while(celula_aux != NULL){
    imprimeTarefa(celula_aux->data);
    celula_aux = celula_aux->prox;
  }
  return ;
}




























