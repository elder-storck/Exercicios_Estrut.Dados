#ifndef TIPODALISTA_H_
#define TIPODALISTA_H_

typedef struct aluno Aluno_t;
typedef struct professor Professor_t;


Aluno_t* aluno_inicia(char* nome,int matricula,float cr);
int aluno_retornaMatricula(Aluno_t* aluno);
float aluno_retornaCR(Aluno_t* aluno);
char* aluno_retornaNome(Aluno_t* aluno);
void aluno_imprime(Aluno_t* aluno);
void aluno_libera(Aluno_t* aluno);



Professor_t* iniciaProfessor_Professor(char* nome,int siape,float salario);
int _retornaSiape_Professor(Professor_t* professor);
float _retornaSalario_Professor(Professor_t* professor);
char* _retornaNome_Professor(Professor_t* professor);
void imprime_Professor(Professor_t* professor);
void libera_Professor(Professor_t* professor);


#endif /*TIPODALISTA_H_*/