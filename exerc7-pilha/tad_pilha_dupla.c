#include"tad_pilha_dupla.h"
#include<stdio.h>
#include<stdlib.h>

//Definição da Pilha Dupla de inteiros (sugestão):
#define MaxTam 6

typedef struct{
    int Topo, Base;
}IndicePilha;

struct tipopilhadupla_st{
    Aluno_t* Elem[MaxTam];
    IndicePilha Pilha1, Pilha2;
} ;



TipoPilhaDupla* Inicializa_PilhaDupla(){
    TipoPilhaDupla* p = (TipoPilhaDupla*) malloc (sizeof (TipoPilhaDupla));
    p->Pilha1.Base = 0;
    p->Pilha1.Topo = -1; /* cresce para a direita */
    p->Pilha2.Base = MaxTam -1;
    p->Pilha2.Topo = MaxTam; /* cresce para a esquerda */
}

//esvazia a pilha
void FPVazia_PilhaDupla(TipoPilhaDupla *Pilha){
    Pilha->Pilha1.Base = 0;
    Pilha->Pilha1.Topo = -1;
    Pilha->Pilha2.Base = MaxTam -1;
    Pilha->Pilha2.Topo = MaxTam;
}

//diz se a pilha está vazia
int pilha1Vazia_PilhaDupla (TipoPilhaDupla *Pilha){
    if(Pilha->Pilha1.Topo == -1)return 1;
    return 0;
}
int pilha2Vazia_PilhaDupla (TipoPilhaDupla *Pilha){
    if(Tamanho_Pilha2(Pilha)==0)return 1;
    return 0;
    //if(Pilha->Pilha2.Topo == MaxTam)return 1;
}

void pilha1_Empilha_PilhaDupla (Aluno_t* x,TipoPilhaDupla *Pilha){
    if(Pilha->Pilha1.Topo == Pilha->Pilha2.Topo-1){
        printf("\n\nERRO 0001:\nLista cheia ou aluno inválido\n");
        return;
    }
    Pilha->Elem[Pilha->Pilha1.Topo+1] = x;
    Pilha->Pilha1.Topo++;
}
void pilha2_Empilha_PilhaDupla (Aluno_t* x,TipoPilhaDupla *Pilha){
    if(Pilha->Pilha1.Topo == Pilha->Pilha2.Topo-1){
        printf("\n\nERRO 0001:\nLista cheia ou aluno inválido\n");
        return;
    }
    Pilha->Elem[Pilha->Pilha2.Topo-1] = x;
//    printf("\n\n%d\n\n",Pilha->Pilha2.Topo-1);
    Pilha->Pilha2.Topo--;
}

Aluno_t* pilha1_Desempilha_PilhaDupla(TipoPilhaDupla *Pilha){
    if(pilha1Vazia_PilhaDupla(Pilha))return NULL;
    Pilha->Pilha1.Topo--;
    return Pilha->Elem[Pilha->Pilha1.Topo +1];
}
Aluno_t* pilha2_Desempilha_PilhaDupla(TipoPilhaDupla *Pilha){
    if(pilha2Vazia_PilhaDupla(Pilha))return NULL;
    Pilha->Pilha2.Topo++;
    return Pilha->Elem[Pilha->Pilha2.Topo -1];
}

//devolve o tamanho
int Tamanho_Pilha1(TipoPilhaDupla *Pilha){
    return (Pilha->Pilha1.Topo+1);
}
int Tamanho_Pilha2(TipoPilhaDupla *Pilha){
    return (MaxTam - Pilha->Pilha2.Topo);
}


void Exibe_Pilha1 (TipoPilhaDupla *pilha){
    if(pilha1Vazia_PilhaDupla(pilha))
        printf("Pilha 1 Vazia\n");

    for(int i=0;i < pilha->Pilha1.Topo+1;i++){
        if(pilha->Elem[i] != NULL);
        imprime_Aluno(pilha->Elem[i]);
    }
}
void Exibe_Pilha2 (TipoPilhaDupla *pilha){
    if(pilha2Vazia_PilhaDupla(pilha)){
        printf("Pilha 2 Vazia\n");
        return ;
    }
        
    int j = MaxTam-1;
    for(int i = 0; i < Tamanho_Pilha2(pilha); i++){
        if(pilha->Elem[j] != NULL)
        imprime_Aluno(pilha->Elem[j]);
        j--;
    }
    
}

void Exibe_pilha_dupla(TipoPilhaDupla *pilha){
    printf("\n");
    printf("lista 1 : %d\t,lista 2 : %d\n ",Tamanho_Pilha1(pilha),Tamanho_Pilha2(pilha));
    printf("Pilha 1:\n");
    Exibe_Pilha1(pilha);
    printf("Pilha 2:\n");
    Exibe_Pilha2(pilha);
    printf("\n");
}



