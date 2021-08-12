#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include"listaEncHeterogenea.h"
#include"tipoDaLista.h"
#include"listaEncHeterogenea.h"

int main(){

    printf("\n\n\tINICIANDO ALUNO\n\n");
    Aluno_t* aluno1;
    Aluno_t* aluno2;
    Aluno_t* aluno3;
    Aluno_t* aluno4;
    Professor_t* professor1;
    Professor_t* professor2;

    aluno1 = iniciaAluno_Aluno("ELder",123,10);
    aluno2 = iniciaAluno_Aluno("Neymar",656,5);
    aluno3 = iniciaAluno_Aluno("Eu Com outro Nome",21,9);
    aluno4 = iniciaAluno_Aluno("Sem nome",999,8);
    professor1 = iniciaProfessor_Professor("professor1",202101,9435.00);
    professor2 = iniciaProfessor_Professor("professor2",202102,7432.00);
    
    ListaHet_t* listaChurras = criaLista();
    insereAlunoNaLista(listaChurras,aluno1);
    insereAlunoNaLista(listaChurras,aluno2);
    insereAlunoNaLista(listaChurras,aluno3);
    insereAlunoNaLista(listaChurras,aluno4);
    insereProfessorNaLista(listaChurras,professor1);
    insereProfessorNaLista(listaChurras,professor2);
    
    printf("\nImprimindo a Lista\n");
    imprimeLista(listaChurras);
    printf("Valor Para o Churras:%0.2f\n\n",valorChurrasco(listaChurras));

    destroiLista(listaChurras);    
    libera_Aluno(aluno1);
    libera_Aluno(aluno2);
    libera_Aluno(aluno3);
    libera_Aluno(aluno4);
    libera_Professor(professor1);
    libera_Professor(professor2);
    

    return 0;
}