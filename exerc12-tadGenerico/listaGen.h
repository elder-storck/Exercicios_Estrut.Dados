#include<stdlib.h>
#include<stdio.h>

typedef struct listagen ListaGen;


ListaGen* listaGen_cria(void);

ListaGen* listaGen_insere(ListaGen* lista, void* item);

ListaGen* listaGen_retira(ListaGen* lista, int(*cb)(void*,void*),void* chave);

int listaGen_percorre(ListaGen* lista, int(*cb)(void*,void*),void* dado);

void listaGen_libera(ListaGen* lista);