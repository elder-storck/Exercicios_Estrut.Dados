#ifndef TIPODALISTA_H_
#define TIPODALISTA_H_

typedef struct aluno Aluno_t;
typedef struct professor Professor_t;

Aluno_t* iniciaAluno_Aluno(char* nome,int matricula,float cr);
int _retornaMatricula_Aluno(Aluno_t* aluno);
float _retornaCR_Aluno(Aluno_t* aluno);
char* _retornaNome_Aluno(Aluno_t* aluno);
void imprime_Aluno(Aluno_t* aluno);
void libera_Aluno(Aluno_t* aluno);

Professor_t* iniciaProfessor_Professor(char* nome,int siape,float salario);
int _retornaSiape_Professor(Professor_t* professor);
float _retornaSalario_Professor(Professor_t* professor);
char* _retornaNome_Professor(Professor_t* professor);
void imprime_Professor(Professor_t* professor);
void libera_Professor(Professor_t* professor);


#endif /*TIPODALISTA_H_*/