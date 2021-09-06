#include"arvore.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct arv{
    Aluno_t* info;
    Arv* esq;
    Arv* dir;
};

Arv* arv_criavazia (void){
    return NULL;
}

Arv* arv_cria (Aluno_t* al, Arv* e, Arv* d){
    Arv* x = (Arv*)malloc(sizeof(Arv));
    x->dir = d;
    x->esq = e;
    x->info = al;
    return x;
}

Arv* arv_libera (Arv* a){
    if(!arv_vazia(a)){
        arv_libera(a->esq);
        arv_libera(a->dir);
        free(a);
    }
    return NULL;
}

int arv_vazia (Arv* a){
    if(a == NULL)return 1;
    return 0;
}

int arv_pertence (Arv* a, char* nomeAl){
    if(arv_vazia(a)){
        return 0;
    }else{
        if(strcmp(nomeAl,_retornaNome_Aluno(a->info)) == 0 || arv_pertence(a->esq,nomeAl) ||arv_pertence(a->dir,nomeAl))
            return 1;
    }
}

void arv_imprime (Arv* a){
    printf("<");
    if(!arv_vazia(a)){
        printf("%s",_retornaNome_Aluno(a->info));
        //imprime_Aluno(a->info);
        arv_imprime(a->esq);
        arv_imprime(a->dir);
    }
    printf(">");
}

//retorna o número de folhas da árvore
int folhas (Arv* a){
    int soma = 0;
    if(!arv_vazia(a)){
     soma += folhas(a->esq);
     soma += folhas(a->dir);
     
     if(arv_vazia(a->dir) ==1  && arv_vazia(a->esq) == 1){
        return (soma+1);
     }
    
    return soma;
    }else{
        return 0;
    }
}
//retorna o número de vezes que o aluno aparece na árvore
int ocorrencias (Arv* a , char* nomeAl){
    int soma =0;
    if(!arv_pertence(a,nomeAl)){
      return 0;
    }else{
      if(!arv_vazia(a)){
        if(arv_pertence(a->esq,nomeAl) != 0){
            soma += arv_pertence(a->esq,nomeAl);
        }
        if(arv_pertence(a->dir,nomeAl) != 0){
            soma += arv_pertence(a->dir,nomeAl);  
        }
        if(strcmp(nomeAl,_retornaNome_Aluno(a->info)) == 0){
            soma ++;
        }
        return soma;
      }else{
          return 0;
      }
    }
}

//retorna a altura da árvore
int altura (Arv* a){
    if(arv_vazia(a)){
        return 0;
    }else{
        int x =0 ,y =0;
        x = altura(a->esq);
        y = altura(a->dir);
        if(x > y){
            return (x+1);
        }else{
            return (y+1);
        }
    }
}