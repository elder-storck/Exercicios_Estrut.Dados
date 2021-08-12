#include<stdio.h>
#include<stdlib.h>
#include"listaMat.h"
//#include"matriz.h"

struct celula{
  Matriz* data;
  Celula* prox;
};
struct lista{
  Celula* primeiro;
  Celula* ultimo;
}; 

Lista* criaLista(){
  Lista* lista = (Lista*)malloc(sizeof(Lista));
  lista->primeiro = NULL;
  lista->ultimo = NULL;
  return lista;
}

void insereNaLista(Matriz* matriz,Lista* lista){
  Celula* celula_t = (Celula*)malloc(sizeof(Celula));
  celula_t->data = matriz;
  celula_t->prox = NULL;

    //caso1: lista vazia
    if(lista->primeiro == NULL && lista->ultimo == NULL){
      lista->primeiro = celula_t;
      lista->ultimo = celula_t;
    return ;
    }
    //caso2: lista só um
    if(lista->primeiro == lista->ultimo){
      lista->primeiro->prox = celula_t;
      lista->ultimo = celula_t;
    return ;
    }

    //caso3: lista com mais de um
      lista->ultimo->prox = celula_t;
      lista->ultimo = celula_t;
      return ;     

}


void retiraDaLista(Lista* lista, int posicao){
  Celula* celula_aux;
  Celula* celula_aux_ant;
  celula_aux = lista->primeiro;
  
  if(posicao == 0){
    retiraPrimeiro(lista);
    return ;
  }
    
  for(int i=0; i<posicao ;i++){
    if( celula_aux->prox != NULL )
      celula_aux = celula_aux->prox;
  }
  
  if(celula_aux == lista->ultimo){
    retiraUltimo(lista);
    return ;
  }

  if(celula_aux != NULL ){
  
    celula_aux_ant = lista->primeiro;
    while(celula_aux_ant->prox != celula_aux){
        celula_aux_ant = celula_aux_ant->prox;
    }
    celula_aux_ant->prox = celula_aux->prox;
    free(celula_aux);
  
  }
return ;
}


void imprimeLista(Lista* lista){
    
    //caso1: lista vazia
    if(lista->primeiro == NULL && lista->ultimo == NULL){
    printf("\nLista vazia\n");
    return ;
    }
  
    //caso2: lista nao vazia
    Celula* celula_aux;
    celula_aux = lista->primeiro;
    while(celula_aux != NULL){
      imprimeMatriz(celula_aux->data);
      celula_aux = celula_aux->prox;
    }
    return ;
}

void retiraPrimeiro(Lista* lista){
  //lista vazia 
  if(lista->primeiro == NULL && lista->ultimo == NULL){
    //printf("\nLista vazia\n");
    return ;
    }

  //lista um só 
  if(lista->primeiro == lista->ultimo){
    free(lista->primeiro);
    lista->primeiro = NULL;
    lista->ultimo = NULL;
    return ;
  }
  
  //lista mais de um 
  Celula* celula_aux = lista->primeiro;
  lista->primeiro = lista->primeiro->prox;
  free(celula_aux);
  return ;
}







void retiraUltimo(Lista* lista){
 //lista vazia 
  //if(lista->primeiro == NULL && lista->ultimo == NULL){
    //printf("\nLista vazia\n");
   // return ;
   // }

  //lista um só 
  if(lista->primeiro == lista->ultimo){
    free(lista->ultimo);
    lista->primeiro = NULL;
    lista->ultimo = NULL;
    return ;
  }
  
  //lista mais de um 
  //Celula* celula_aux1 = lista->ultimo;
  Celula* celula_aux = lista->primeiro;
  while(celula_aux->prox != lista->ultimo){
    celula_aux = celula_aux->prox;
  }
  //lista->primeiro = lista->primeiro->prox;
  free(lista->ultimo);
  lista->ultimo = celula_aux;
  celula_aux->prox = NULL;

  return ;

}









void liberaLista(Lista* lista){
  //Celula* celula_aux;
  //  celula_aux = lista->primeiro;
    
    while(lista->primeiro != NULL){
      retiraUltimo(lista);
    }
  
  lista->primeiro = NULL;
  lista->ultimo = NULL;
  free(lista);
  return ;

}




