/*********************************** 
  Programa testador do TAD Tarefa
************************************/

/*
#include <stdio.h>
#include "tarefa.h"

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

imprimeTarefa(tarefa1);
imprimeTarefa(tarefa2);
imprimeTarefa(tarefa3);
imprimeTarefa(tarefa4);

int* dataaux = devolveData(tarefa1);

ModificarTarefa(tarefa4, dataaux,"modificada4");
ModificarTarefa(tarefa3, dataaux,"modificada3");
printf("\nElemento Modificado\n\n");


imprimeTarefa(tarefa1);
imprimeTarefa(tarefa2);
imprimeTarefa(tarefa3);
imprimeTarefa(tarefa4);

printf("\nMateria:%s\n",devolveMateria(tarefa1));
printf("\nMateria:%s\n",devolveMateria(tarefa4));
printf("\nData Materia:%d/%d/%d\n",dataaux[0],dataaux[1],dataaux[2]);

deletaTarefa(tarefa1);
deletaTarefa(tarefa2);
deletaTarefa(tarefa3);
deletaTarefa(tarefa4);

  return 0;
}
*/