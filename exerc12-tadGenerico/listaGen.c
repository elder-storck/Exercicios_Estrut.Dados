#include<stdlib.h>
#include<stdio.h>
#include"listaGen.h"

struct listagen{
    void* item;
    ListaGen* prox;
};


ListaGen* listaGen_cria(void){
    return NULL;
}

ListaGen* listaGen_insere(ListaGen* lista, void* item){
    ListaGen* novo = (ListaGen*) malloc(sizeof(ListaGen));
    novo->prox = lista;
    novo->item = item;
    return novo;
}

ListaGen* listaGen_retira(ListaGen* lista, int(*cb)(void*,void*),void* chave){
    ListaGen* p = lista;
    ListaGen* ant = NULL;

    //callback retorna 0 se forem iguais as chaves
    while( p!= NULL && cb(p->item,chave)){
        ant = p;
        p = p->prox;
    }

    //lista vazia
    if(p == NULL)
        return lista;
    
    if(ant == NULL)
        lista = lista->prox;
    else 
        ant->prox = p->prox;
    
    free(p);
    return lista;
}

int listaGen_percorre(ListaGen* lista, int(*cb)(void*,void*),void* dado){
    ListaGen* p;
    for(p=lista; p!= NULL; p= p->prox){
        int r = cb(p->item,dado);
        if(r == 0)
            return r;
    }
    return 1;
}

void listaGen_libera(ListaGen* lista){
    ListaGen* t;
    ListaGen* p = lista;

    while(p != NULL){
        t = p->prox;
        free(p);
        p = t;
    }
}






