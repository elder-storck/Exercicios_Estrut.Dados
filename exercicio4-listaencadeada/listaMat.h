//listaMat.h: especificação do TAD Lista de Matrizes com funções de criação, inserção, retirada, impressão e liberação de memória; o retira só vai fazer sentido considerando a posição da matriz na lista.
#include "matriz.h"

typedef struct celula Celula;
typedef struct lista Lista;


Lista* criaLista(); 
void insereNaLista(Matriz* matriz,Lista* lista);
void retiraDaLista(Lista* lista, int posicao);
void imprimeLista(Lista* lista);
void retiraPrimeiro(Lista* lista);
void retiraUltimo(Lista* lista);
void liberaLista(Lista* lista);
