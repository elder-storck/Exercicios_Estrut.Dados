#ifndef LISTATAREFAFILE_H_
#define LISTATAREFAFILE_H_

#include"tarefa.h"

typedef struct celula Celula; //Tipo matriz (tipo opaco)

Celula* criaLista();
Celula* insereNaLista(Celula* prim_celula,Tarefa* tarefa);
Celula* DevolveUltimoElemento(Celula* prim_celula);
int DevolveQuantidadeElemento(Celula* prim_celula);
Celula* devolveElem_NaPosicao(Celula* prim_celula,int posicao);
Celula* retiraDaLista(Celula* prim_celula,int posicao);
void liberaLista(Celula* prim_celula);
void imprimeLista(Celula* prim_celula);

#endif /*LISTATAREFAFILE_H_*/