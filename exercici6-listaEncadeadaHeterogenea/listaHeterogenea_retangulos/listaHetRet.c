#include<stdio.h>
#include<stdlib.h>

/* Definição dos tipos de objetos */
#define RET 0
#define TRI 1
#define CIR 2
#define PI 3.14

struct retangulo {
    float b;
    float h;
};
typedef struct retangulo Retangulo;


struct triangulo {
    float b;
    float h;
};
typedef struct triangulo Triangulo;


struct circulo {
    float r;
};
typedef struct circulo Circulo;

typedef struct celula_str{
    int tipo;
    void* Item;
    struct celula_str* Prox;
}Celula;
typedef Celula TipoListaHet;

static float _retornaAreaTraiangulo(float base,float alt);
static float _retornaAreaRetangulo(float base,float alt);
static float _retornaAreaCirculo(float raio);
TipoListaHet* cria_ret (float b, float h);
TipoListaHet* cria_tri (float b, float h);
TipoListaHet* cria_cir (float r);

float _retornaAreaTraiangulo(float base,float alt){
    return ((base*alt)/2);
}
float _retornaAreaRetangulo(float base,float alt){
    return (base*alt);
}
float _retornaAreaCirculo(float raio){
    return (PI*raio*raio);
}

TipoListaHet* cria_ret (float b, float h){
    Retangulo* r = (Retangulo*) malloc(sizeof(Retangulo));
        r->b = b;
        r->h = h;
    TipoListaHet* p = (TipoListaHet*) malloc(sizeof(TipoListaHet));
        p->tipo = RET;
        p->Item = r;
        p->Prox = NULL;
    return p;
}
TipoListaHet* cria_tri (float b, float h){
    Triangulo* t = (Triangulo*) malloc(sizeof(Triangulo));
        t->b = b;
        t->h = h;
    TipoListaHet* p = (TipoListaHet*) malloc(sizeof(TipoListaHet));
        p->tipo = TRI;
        p->Item = t;
        p->Prox = NULL;
    return p;
}
TipoListaHet* cria_cir (float r){
    Circulo* c = (Circulo*)malloc(sizeof(Circulo));
        c->r = r;
    TipoListaHet* p = (TipoListaHet*) malloc(sizeof(TipoListaHet));
        p->tipo = CIR;
        p->Item = r;
        p->Prox = NULL;
    return p;
}