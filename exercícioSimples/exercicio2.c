#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Aluno_st{
  char* nome;
  int matricula;
  float p1;
  float p2;
  float p3;
}Aluno_t;

//typedef struct Aluno_t* Aluno_pt;

char* LeNome();
Aluno_t* LeAluno();
void LimparTurma(Aluno_t** turma,int n);
void ImprimirAluno(Aluno_t* aluno);
void imprime_aprovados (int n, Aluno_t** turma);
float media_turma (int n, Aluno_t** turma);

int main(void) {
  int n,i;
  printf("Quantos alunos deve ter a turma:");
  scanf("%d",&n);
  printf("\n");
    
    Aluno_t** turma = (Aluno_t**)malloc (n * sizeof(Aluno_t*));
    for(i=0; i<n; i++){
     turma[i] = LeAluno();
    }
    for(i=0; i<n; i++){
     ImprimirAluno(turma[i]);
    }
    
    imprime_aprovados(n,turma);
    media_turma(n,turma);
    LimparTurma(turma,n);

  return 0;
}

Aluno_t* LeAluno(){
  Aluno_t* aluno = (Aluno_t*)malloc(sizeof(Aluno_t));
    printf("Digite o nome do Aluno:");
    aluno->nome = LeNome();
    printf("\n");
    printf("Digite a Matricula:");
    scanf("%d",&aluno->matricula);
    printf("\n");
    printf("Digite a Nota p1:");
    scanf("%f",&aluno->p1);
    printf("\n");
    printf("Digite a Nota p2:");
    scanf("%f",&aluno->p2);
    printf("\n");
    printf("Digite a Nota p3:");
    scanf("%f",&aluno->p3);
    printf("\n");
return aluno;
}

char* LeNome(){
  char nomeaux[90];
  scanf("\n");
  scanf("%[^\n]",nomeaux);
  char* nome = (char*)malloc(1+(strlen(nomeaux) * sizeof(char)));
  strcpy(nome, nomeaux);
  return nome;
}

void LimparTurma(Aluno_t** turma,int n){
    for(int i=0;i<n;i++){
    free(turma[i]->nome);
    free(turma[i]);    
    }
    free(turma);
}
void ImprimirAluno(Aluno_t* aluno){
    printf("\n------------Aluno------------\n");
    
    printf("Nome do Aluno:%s\n",aluno->nome);
    printf("Matricula:%d\n",aluno->matricula);
    printf("Nota p1:%f\n",aluno->p1);
    printf("Nota p2:%f\n",aluno->p2);
    printf("Nota p3:%f\n",aluno->p3);
    
return ;
}

void imprime_aprovados (int n, Aluno_t** turma){
    printf("\n------------Lista dos AProvados------------\n");
    for(int i=0; i<n;i++){
        if((turma[i]->p1 + turma[i]->p1 + turma[i]->p1) >= 5){
            printf("Aluno Aprovado : %s\n",turma[i]->nome);
        }
    }    
    return ;
}

float media_turma (int n, Aluno_t** turma){
    float resultado=0;
    for(int i=0; i<n;i++){
        resultado = turma[i]->p1 + turma[i]->p1 + turma[i]->p1;
    }
    resultado = resultado/n;
    printf("\n------------Media da Turma :%f------------\n",resultado);
} 

