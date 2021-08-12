#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"tarefa.h"

struct tarefa{
  int data[3];
  char materia[30];
};

Tarefa* criaTarefa(int data[],char* materia){
Tarefa* tarefa_t = malloc(sizeof(Tarefa));
  tarefa_t->data[0] = data[0];
  tarefa_t->data[1] = data[1];
  tarefa_t->data[2] = data[2];
  strcpy(tarefa_t->materia,materia);
  return tarefa_t;
}

void ModificarTarefa(Tarefa* tarefa,int data[],char* materia){
  tarefa->data[0] = data[0];
  tarefa->data[1] = data[1];
  tarefa->data[2] = data[2];
  strcpy(tarefa->materia,materia);
}
void deletaTarefa(Tarefa* tarefa){
  free(tarefa);
}
int* devolveData(Tarefa* tarefa){
  return tarefa->data;
}
char* devolveMateria(Tarefa* tarefa){
  return tarefa->materia;
}
void imprimeTarefa(Tarefa* tarefa){
  printf("Tarefa:%s;\tData %d/%d/%d\n",tarefa->materia,tarefa->data[0],tarefa->data[1],tarefa->data[2]);
}
