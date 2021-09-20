#ifndef TIPODALISTA_H_
#define TIPODALISTA_H_

typedef struct aluno Aluno_t;
typedef struct professor Professor_t;

Aluno_t* aluno_inicia(char* nome,int matricula,float cr);
int      aluno_retornaMatricula(Aluno_t* aluno);
float    aluno_retornaCR(Aluno_t* aluno);
char*    aluno_retornaNome(Aluno_t* aluno);
void     aluno_exibe(Aluno_t* aluno);
void     aluno_libera(Aluno_t* aluno);


#endif /*TIPODALISTA_H_*/