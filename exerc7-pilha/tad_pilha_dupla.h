#include"tipoDaLista.h"

//typedef struct tipopilha TipoPilha;
typedef struct tipopilhadupla_st TipoPilhaDupla;


TipoPilhaDupla* Inicializa_PilhaDupla();

//esvazia a pilha
void FPVazia_PilhaDupla(TipoPilhaDupla *Pilha);

//diz se a pilha está vazia
int pilha1Vazia_PilhaDupla (TipoPilhaDupla *Pilha);
int pilha2Vazia_PilhaDupla (TipoPilhaDupla *Pilha);

void pilha1_Empilha_PilhaDupla (Aluno_t* x,TipoPilhaDupla *Pilha);
void pilha2_Empilha_PilhaDupla (Aluno_t* x,TipoPilhaDupla *Pilha);

Aluno_t* pilha1_Desempilha_PilhaDupla(TipoPilhaDupla *Pilha);
Aluno_t* pilha2_Desempilha_PilhaDupla(TipoPilhaDupla *Pilha);

//devolve o tamanho
int Tamanho_Pilha1(TipoPilhaDupla *Pilha);
int Tamanho_Pilha2(TipoPilhaDupla *Pilha);

void Exibe_Pilha1 (TipoPilhaDupla *pilha);
void Exibe_Pilha2 (TipoPilhaDupla *pilha);

void Exibe_pilha_dupla(TipoPilhaDupla *pilha);