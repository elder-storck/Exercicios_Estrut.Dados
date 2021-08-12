/*********************************** 
  Programa testador do TAD Lista Duplamente encadeada
************************************/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
//#include"tarefa.h"
#include"listatarefa.h"
//#include "tarefa.h"


int main(void) {

int data1[3]; data1[0] = 21;data1[1] = 7;data1[2] = 2021;
char nome1[30] ="Estrutura De Dados";

int data2[3]; data2[0] = 22;data2[1] = 8;data2[2] = 2022;
char nome2[30] ="Calculo 2";

int data3[3]; data3[0] = 23;data3[1] = 9;data3[2] = 2023;
char nome3[30] ="Introd Mec Classica";

int data4[3]; data4[0] = 23;data4[1] = 9;data4[2] = 2023;
char nome4[30] ="Extra";

Tarefa* tarefa1 = criaTarefa(data1,nome1);
Tarefa* tarefa2 = criaTarefa(data2,nome2);
Tarefa* tarefa3 = criaTarefa(data3,nome3);
Tarefa* tarefa4 = criaTarefa(data4,nome4);


Celula* celula1 = criaLista();

printf("\n\n******Qtd De Elemento:%d******",DevolveQuantidadeElemento(celula1));
imprimeLista(celula1);

printf("\nInserindo Elementos\n\n");

celula1 = insereNaLista(celula1,tarefa1);
celula1 = insereNaLista(celula1,tarefa2);
celula1 = insereNaLista(celula1,tarefa3);
celula1 = insereNaLista(celula1,tarefa4);

printf("******Qtd De Elemento:%d******\n",DevolveQuantidadeElemento(celula1));
imprimeLista(celula1);

printf("\nRetirando Elemento 1 e 3 e 4\n\n");

celula1 = retiraDaLista(celula1,3);
celula1 = retiraDaLista(celula1,2);
celula1 = retiraDaLista(celula1,0);

printf("******Qtd De Elemento:%d******\n",DevolveQuantidadeElemento(celula1));
imprimeLista(celula1);

celula1 = insereNaLista(celula1,tarefa1);
celula1 = insereNaLista(celula1,tarefa2);
celula1 = insereNaLista(celula1,tarefa4);

printf("\n******Qtd De Elemento:%d******\n",DevolveQuantidadeElemento(celula1));
imprimeLista(celula1);

printf("\nLIBERANDO LISTA\n\n");

liberaLista(celula1);

deletaTarefa(tarefa1);
deletaTarefa(tarefa2);
deletaTarefa(tarefa3);
deletaTarefa(tarefa4);

  return 0;
}
