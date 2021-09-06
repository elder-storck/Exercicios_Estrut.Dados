#include"tad_pilha_dupla.h"
#include<stdio.h>
#include<stdlib.h>

int main(){
    Aluno_t* al1 = iniciaAluno_Aluno("al1",01,10);
    Aluno_t* al2 = iniciaAluno_Aluno("al2",02,10);
    Aluno_t* al3 = iniciaAluno_Aluno("al3",03,10);
    Aluno_t* al4 = iniciaAluno_Aluno("al4",04,10);
    Aluno_t* al5 = iniciaAluno_Aluno("al5",05,10);
    Aluno_t* al6 = iniciaAluno_Aluno("al6",06,10);

 
    TipoPilhaDupla *pilha = Inicializa_PilhaDupla();
    printf("\nAdicionando elemento\n");
    pilha1_Empilha_PilhaDupla(al1,pilha);
    pilha1_Empilha_PilhaDupla(al2,pilha);
    pilha2_Empilha_PilhaDupla(al3,pilha);
    pilha2_Empilha_PilhaDupla(al4,pilha);
    pilha2_Empilha_PilhaDupla(al5,pilha);
    pilha2_Empilha_PilhaDupla(al6,pilha);
    Exibe_pilha_dupla(pilha);

    printf("\nRetirando Elemento\n");
    Aluno_t* al7 = pilha1_Desempilha_PilhaDupla(pilha);
    //Exibe_pilha_dupla(pilha);
    Aluno_t* al8 = pilha1_Desempilha_PilhaDupla(pilha);
    Exibe_pilha_dupla(pilha);

    printf("\nAdicionando elemento\n");
    pilha1_Empilha_PilhaDupla(al7,pilha);
    pilha1_Empilha_PilhaDupla(al8,pilha);
    Exibe_pilha_dupla(pilha);

    printf("\nRetirando Elemento\n");
    Aluno_t* al10 = pilha2_Desempilha_PilhaDupla(pilha);
    Aluno_t* al11 = pilha2_Desempilha_PilhaDupla(pilha);
    Exibe_pilha_dupla(pilha);
    
    printf("\nAdicionando elemento\n");
    pilha2_Empilha_PilhaDupla(al10,pilha);
    pilha2_Empilha_PilhaDupla(al10,pilha);
    Exibe_pilha_dupla(pilha);

    libera_Aluno(al1);
    libera_Aluno(al2);
    libera_Aluno(al3);
    libera_Aluno(al4);
    libera_Aluno(al5);
    libera_Aluno(al6);
    free(pilha);
 //   free(pilha2);
    //libera_Aluno(al7);
    //libera_Aluno(al8);
    //libera_Aluno(al9);
}