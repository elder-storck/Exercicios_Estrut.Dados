#include<stdio.h>
#include<stdlib.h>
#include"tipoDaLista.h"
#include"tadAluno.h"
#include"listaGen.h"


int main(){

    ListaGen* lista = listaGen_cria();

    Aluno_t* al1 = aluno_inicia("al1",01,3);
    lista = listaGen_insere(lista,al1);
    Aluno_t* al2 = aluno_inicia("al2",02,4.8);
    lista = listaGen_insere(lista,al2);
    Aluno_t* al3 = aluno_inicia("al3",03,9.2);
    lista = listaGen_insere(lista,al3);
    Aluno_t* al4 = aluno_inicia("al4",04,7);
    lista = listaGen_insere(lista,al4);
    Aluno_t* al5 = aluno_inicia("al5",05,6.98);
    lista = listaGen_insere(lista,al5);
    Aluno_t* al6 = aluno_inicia("al6",06,5.82);
    lista = listaGen_insere(lista,al6);
    
    printf("\nLISTA:\n");
    lista_exibe(lista);
    
    printf("\n\nRETIRANDO ALUNOS\n");
    lista = lista_retiraAluno(lista,01);
    lista = lista_retiraAluno(lista,04);

    printf("\n\nLISTA:\n");
    lista_exibe(lista);

    printf("\n\nINSERINDO ALUNO\n");
    lista = listaGen_insere(lista,al1);
    
    printf("\nLISTA:\n");
    lista_exibe(lista);

    int i = lista_alunoPertence(lista,02);
    if(i == 0) puts("\nAluno está na lista \n");
    else    puts("\nAluno Não está na lista \n");

    float media = lista_mediaDosAlunos(lista);

    printf("A média dos Alunos é :%0.2f\n",media);

    listaGen_libera(lista);
    aluno_libera(al1);
    aluno_libera(al2);
    aluno_libera(al3);
    aluno_libera(al4);
    aluno_libera(al5);
    aluno_libera(al6);


    return 0;
}