#include<stdlib.h>
#include<stdio.h>
#include"listaGen.h"

//retira aluno pela matricula
ListaGen* lista_retiraAluno(ListaGen* lista,int matricula);

//verifica se aluno está na lista
int lista_alunoPertence(ListaGen* lista,int matricula);

//imprime lista de alunos
void lista_exibe(ListaGen* lista);

//retorna média dos CR's dos alunos
float lista_mediaDosAlunos(ListaGen* lista);

