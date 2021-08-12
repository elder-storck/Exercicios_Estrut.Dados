#include<stdio.h>
#include"tipoDaLista.h"


typedef struct lista ListaHet_t;


ListaHet_t* criaLista(); 
void insereAlunoNaLista(ListaHet_t* lista,Aluno_t* aluno);
void insereProfessorNaLista(ListaHet_t* lista,Professor_t* professor);
void imprimeLista(ListaHet_t* lista);
float valorChurrasco(ListaHet_t* lista);
void destroiLista(ListaHet_t* lista);


/*
void retiraDaLista(Lista* lista, int posicao);
void imprimeLista(Lista* lista);
void retiraPrimeiro(Lista* lista);
void retiraUltimo(Lista* lista);
void liberaLista(Lista* lista);
*/