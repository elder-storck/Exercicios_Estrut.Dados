#ifndef TAREFAFILE_H_
#define TAREFAFILE_H_

//Tipo matriz (tipo opaco)
//Estrutura interna do tipo deve ser definida na implementação do TAD
typedef struct tarefa Tarefa;

Tarefa* criaTarefa(int data[],char* materia);
void ModificarTarefa(Tarefa* tarefa,int data[],char* materia);
void deletaTarefa(Tarefa* tarefa);
int* devolveData(Tarefa* tarefa);
char* devolveMateria(Tarefa* tarefa);
void imprimeTarefa(Tarefa* tarefa);

#endif /*TAREFAFILE_H_*/