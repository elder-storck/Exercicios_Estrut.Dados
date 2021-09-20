#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arvBinDeBusca.h"

struct arv{
    Aluno_t* al;
    Arv_t* direita;
    Arv_t* esquerda;
};


Arv_t* abb_cria(void){
    return NULL;
}


void abb_exibe(Arv_t* a){
    if(a != NULL){
        abb_exibe(a->esquerda);
        aluno_exibe(a->al);
        abb_exibe(a->direita);
    }
    return;
}


Arv_t* abb_busca (Arv_t* a,int chave){
    if(a != NULL){
        if(chave < aluno_retornaMatricula(a->al)){
            return abb_busca(a->esquerda,chave);
        } 
        else if(chave > aluno_retornaMatricula(a->al)){
            return abb_busca(a->direita,chave);
        }else
            return a;
    }
    else
        return NULL;
    
}


Arv_t* abb_insere (Arv_t* a,Aluno_t* al){

    if(a == NULL){
        a = (Arv_t*) malloc(sizeof(Arv_t));
        a->al = al;
        a->direita = NULL;
        a->esquerda = NULL;
    }
    else if(aluno_retornaMatricula(al) < aluno_retornaMatricula(a->al)){
            a->esquerda = abb_insere(a->esquerda,al);
    }else if(aluno_retornaMatricula(al) > aluno_retornaMatricula(a->al)){
        a->direita = abb_insere(a->direita,al);
    }
    return a;
}


Arv_t* abb_retira (Arv_t* a,int chave){
    
    if(a == NULL)   return NULL; //caso base
    
    else if(chave < aluno_retornaMatricula(a->al)){  //percorrendo árvore
        a->esquerda = abb_retira(a->esquerda,chave);

    }
    else if(chave > aluno_retornaMatricula(a->al)){  //percorrendo árvore
        a->direita = abb_retira(a->direita,chave);
    }

    else{   //acho o nó    
       //caso 1: retira nó folha
       if(a->direita == NULL && a->esquerda == NULL){
           free(a);
           a = NULL;
       }
       //caso 2: retira nó com 1 filho na direita
       else if(a->direita != NULL && a->esquerda == NULL){
           Arv_t* aux = a;
           a = a->direita;
           free(aux); 
       }
       //caso 2: retira nó com 1 filho na esquerda
       else if(a->direita == NULL && a->esquerda != NULL){
           Arv_t* aux = a;
           a = a->esquerda;
           free(aux);
        }
       //caso 3: retira nó com 2 filhos
       else if(a->direita != NULL && a->esquerda != NULL){
           Arv_t* aux = a->esquerda;
           while(aux->direita != NULL){     //achando antecessor
               aux = aux->direita;
           }
           Aluno_t* al;                     //trocando info (alunos)
           al = aux->al;
           aux->al = a->al;
           a->al = al;
           a->esquerda = abb_retira(a->esquerda,chave);   //chamando funcao, agora vai cair no caso 1 ou 2
       }
    }
    return a;
}


Arv_t* abb_libera (Arv_t* a){
    if(a != NULL){
        abb_libera(a->esquerda);
        abb_libera(a->direita);
        free(a);
    }
    return NULL;
}


void abb_exibePonteiros(Arv_t* a){
    if(a != NULL){
        abb_exibePonteiros(a->esquerda);
        abb_exibePonteiros(a->direita);
        if(a->direita != NULL)
        printf("%s -> %s;\n",aluno_retornaNome(a->al),aluno_retornaNome(a->direita->al));
        if(a->esquerda != NULL)
        printf("%s -> %s;\n",aluno_retornaNome(a->al),aluno_retornaNome(a->esquerda->al));
    }
}


Aluno_t* abb_retornaAluno (Arv_t* a){
    return a->al;
}