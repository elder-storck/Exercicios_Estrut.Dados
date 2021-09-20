#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"tipoDaLista.h"

struct professor{
    char* nome;
    int siape; //matricula
    float salario;
};
struct aluno{
    char* nome;
    int matricula; //matricula
    float cr;
};

Aluno_t* aluno_inicia(char* nome,int matricula,float cr){
    Aluno_t* aluno = (Aluno_t*)malloc(sizeof(Aluno_t));
    if(aluno == NULL){
        printf("\n\n\tErro em *tipoDaLista*:\nAo Alocar Aluno\n\n");
        exit(1);
    }
    aluno->nome = strdup(nome);
    aluno->matricula = matricula;
    aluno->cr = cr;
    return aluno;
}
int aluno_retornaMatricula(Aluno_t* aluno){
    return aluno->matricula;
}
float aluno_retornaCR(Aluno_t* aluno){
    return aluno->cr;
}
char* aluno_retornaNome(Aluno_t* aluno){
    return aluno->nome;
}
void aluno_exibe(Aluno_t* aluno){
    printf("Aluno:%s ,Matricula:%d\n",aluno->nome,aluno->matricula);
}
void aluno_libera(Aluno_t* aluno){
    free(aluno->nome);
    free(aluno);
}