/*
#include"tad_pilha.h"
#include<stdio.h>
#include<stdlib.h>

#define TAM 5

struct tipopilha {
    int topo;
    Aluno_t* elem[TAM];
};

//inicializa pilha vazia
TipoPilha* InicializaPilha(){
    TipoPilha* pilha = (TipoPilha*) malloc(sizeof(struct tipopilha));
    pilha->topo = 0;
    return pilha;
}
//esvazia a pilha
void FPVazia(TipoPilha *Pilha){
    Pilha->topo = 0;
    return;
}
//diz se a pilha está vazia
int Vazia (TipoPilha* Pilha){
    if(Pilha->topo == 0)
        return 1;
    return 0;
}
//adiciona elemento na lista 
void Empilha (Aluno_t* x, TipoPilha* Pilha){
    if(Pilha->topo >= TAM ){
        printf("\n\nERRO 0001:\nLista cheia ou aluno inválido\n");
        return;
    }
    Pilha->elem[Pilha->topo] = x;
    Pilha->topo ++;
}
//tira elemento do topo da pilha e o retorna 
Aluno_t* Desempilha (TipoPilha* Pilha){
    if(!Vazia(Pilha)){
        Pilha->topo --;
        return Pilha->elem[Pilha->topo];
    }
}
//devolve o tamanho
int Tamanho (TipoPilha* Pilha){
    return(Pilha->topo-1);
}

void Imprime (TipoPilha* pilha){
    if(Vazia(pilha))
        printf("Lista Vazia\n");
    for(int i=0;i < pilha->topo-1;i++){
        imprime_Aluno(pilha->elem[i]);
    }
}
*/