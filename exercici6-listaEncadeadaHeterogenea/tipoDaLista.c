#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"tipoDaLista.h"

/*
typedef struct aluno Aluno_t;
typedef struct professor professor_t
*/

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

Aluno_t* iniciaAluno_Aluno(char* nome,int matricula,float cr){
    Aluno_t* aluno = (Aluno_t*)malloc(sizeof(Aluno_t));
    if(aluno == NULL){
        printf("\n\n\tErro ao Alocar Aluno\n\n");
        exit(1);
    }
    aluno->nome = strdup(nome);
    aluno->matricula = matricula;
    aluno->cr = cr;
    return aluno;
}
int _retornaMatricula_Aluno(Aluno_t* aluno){
    return aluno->matricula;
}
float _retornaCR_Aluno(Aluno_t* aluno){
    return aluno->cr;
}
char* _retornaNome_Aluno(Aluno_t* aluno){
    return aluno->nome;
}
void imprime_Aluno(Aluno_t* aluno){
    printf("Aluno:%s ,Matricula:%d ,Cr:%f\n",aluno->nome,aluno->matricula,aluno->cr);
}
void libera_Aluno(Aluno_t* aluno){
    free(aluno->nome);
    free(aluno);
}







Professor_t* iniciaProfessor_Professor(char* nome,int siape,float salario){
        Professor_t* professor = (Professor_t*)malloc(sizeof(Professor_t));
    if(professor == NULL){
        printf("\n\n\tErro ao Alocar Professor\n\n");
        exit(1);
    }
    professor->nome = strdup(nome);
    professor->siape = siape;
    professor->salario = salario;
    return professor;
}
int _retornaSiape_Professor(Professor_t* professor){
    return professor->siape;
}
float _retornaSalario_Professor(Professor_t* professor){
    return professor->salario;
}
char* _retornaNome_Professor(Professor_t* professor){
    return professor->nome;
}
void imprime_Professor(Professor_t* professor){
    printf("Professor:%s ,Siape:%d , Salario:%f\n",professor->nome,professor->siape,professor->salario);
}
void libera_Professor(Professor_t* professor){
    free(professor->nome);
    free(professor);
}
