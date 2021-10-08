#include<stdlib.h>
#include<stdio.h>
#include"tipoDaLista.h"
#include"tadAluno.h"

struct cr{
    float CR;
    int n;
};

static int cb_comparaMat(void* al1,void* mat){
    Aluno_t* a1 = (Aluno_t*) al1;
    int* iMat = (int*)mat;

    if(aluno_retornaMatricula(a1) == *iMat){
        return 0;
    }
    return 1;
}


static int cb_imprime(void* al , void* dado){
    aluno_imprime(al);
    return 1;
}


static int cb_acumula(void* al , void* dado){
    struct cr* acumulado = (struct cr*)dado;
    acumulado->CR += aluno_retornaCR(al);
    acumulado->n ++;
    return 1;
}


//----------------------------------------retira aluno pela matricula----------------------------------------//
ListaGen* lista_retiraAluno(ListaGen* lista,int matricula){
    listaGen_retira(lista,cb_comparaMat,&matricula);
}


//----------------------------------------verifica se aluno está na lista----------------------------------------//
int lista_alunoPertence(ListaGen* lista,int matricula){
    listaGen_percorre(lista,cb_comparaMat,&matricula);
}


//----------------------------------------Imprime Alunos----------------------------------------//
void lista_exibe(ListaGen* lista){
    listaGen_percorre(lista,cb_imprime,NULL);
}


//----------------------------------------retorna média dos CR's dos alunos----------------------------------------//
float lista_mediaDosAlunos(ListaGen* lista){
    struct cr* acumulado = (struct cr*) malloc(sizeof(struct cr));
    acumulado->CR = 0.0;
    acumulado->n  = 0;

    listaGen_percorre(lista,cb_acumula,acumulado);
    
    float media = acumulado->CR / acumulado->n;

    free(acumulado);
    return media;
}














