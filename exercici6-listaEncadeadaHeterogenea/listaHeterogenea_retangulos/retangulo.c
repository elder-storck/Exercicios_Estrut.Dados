#include<stdio.h>
#include<stdlib.h>

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

float _retornaAreaTraiangulo(float base,float alt);
float _retornaAreaRetangulo(float base,float alt);
float _retornaAreaCirculo(float raio);

float _retornaAreaTraiangulo(float base,float alt){
    return ((base*alt)/2);
}
float _retornaAreaRetangulo(float base,float alt){
    return (base*alt);
}
float _retornaAreaCirculo(float raio){
    return (PI*raio*raio);
}
