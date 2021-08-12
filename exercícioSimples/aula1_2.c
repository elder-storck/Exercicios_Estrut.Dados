#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#undef PI
#define PI 3.1415

void calc_esfera(float r, float* area, float* volume);
int raizes(float a, float b, float c, float* x1, float* x2);
int pares (int n, int* vet);
void inverte (int n, int* vet);
double avalia(double* poli, int grau, double x);

//2.1
/*
int main(){
    float raio,area,volume;
    printf("\nDIgite o Raio da esfera:");
    scanf("%f",&raio);
    printf("\n");
    calc_esfera(raio,&area,&volume);
    printf("O volume da esfera eh: %f\n",volume);
    printf("A area da esfera eh: %f\n",area);
return 0;
}
*/
//2.2
/*
int main(){
    float a,b,c,x1,x2;
    printf("\nDigite os valores a,b e c do polinomio,respectivamente\n");
    printf("Polinomio no formato ax^2 + bx + c :\n");
    scanf("%f %f %f",&a,&b,&c);
    printf("\n");
    printf("Polinomio Digitado : %0.2fx^2 + %0.2fx + %0.2f\n",a,b,c);
    int teste = raizes(a,b,c,&x1,&x2);
    if(teste == 1)printf("Raizes do polinomio x1 = %f e x2 = %f\n",x1,x2);

    return 0;
}
*/
//2.3
/*
int main(){
    int size;
    int* vet = (int*)malloc(sizeof(int)*4);
    for(int i=0;i<4;i++){
        printf("Digite o valor do vet[i]:");
        scanf("%d",&vet[i]);
        printf("\n");
    }
    int retorno = pares(4,vet);
    printf("\nQntd de numeros pares:%d",retorno);
    free(vet);
}
*/
//2.4
/*
int main(){
    int* vet = (int*)malloc(sizeof(int)*7);
    for(int i=0;i<7;i++){
        printf("Digite o valor do vet[i]:");
        scanf("%d",&vet[i]);
        printf("\n");
    }
    inverte(7,vet);
    for(int i=0;i<7;i++){
        printf("valor do vet[i]:%d\n",vet[i]);
    }
    free(vet);
}
*/
int main(){
    double result=0.0,grau ,valorx;
    double* poli = (double*) malloc(11*sizeof(double));  
        grau = 1;
        valorx = 3;
        poli[0] = 3;poli[1] = 7;/*poli[2] = 12; poli[3] = 4;poli[4] = 5;poli[5] = 7;*/
    
        result = avalia(poli,grau,valorx);
    
        printf("Resultado e:%lf",result);
        printf("\n");
  
    free(poli);
    return 0;
}

void calc_esfera(float r, float* area, float* volume){
    *area = 4 * PI * ((float)(pow((double)r,2)));
    *volume = (4/3) * PI * ((float)(pow((double)r,3)));
    return ;
}

int raizes(float a, float b, float c, float* x1, float* x2){
    float delta;
    //ax2 + bx + c = 0.
    if(a==0){
        printf("\nnao e funcao de segundo grau\n");
        return 0;
    }
    //calculando delta
        delta = (b*b)-(4*a*c);
    //calculando raiz se delta maior ou igual zero
    if(delta >= 0){
        *x1 = (-b + (float)sqrt(delta))/2*a;
        *x2 = (-b - (float)sqrt(delta))/2*a;
        return 1;
    }else {
        printf("Funcao Raizes \nPolinomio sem raiz real\n");
        return 0;    
    }
    return 0;
}

int pares (int n, int* vet){
    int i,contador = 0;
    for(i=0;i<n;i++){
        if(vet[i] % 2 == 0) contador++;
    }
    return contador;
}
void inverte (int n, int* vet){
    int i,aux;
    int nubmax =0 ;
    if(n % 2 == 0)nubmax = n/2;
    if(n % 2 != 0)nubmax = (n-1)/2;
    
    for(i=0;i < nubmax;i++){
        if(i==0){
            aux = vet[n-1];
            vet[n-1] = vet[0];
            vet[0] = aux;    
        }else{
            aux = vet[n-i-1];
            vet[n-i-1] = vet[i];
            vet[i] = aux;    
        }
    }
    return ;
}
double avalia(double* poli, int grau, double x){
    double resultado;

    if(poli[grau] == 0)printf("\npolinomio não corresponde ao grau determinado\n");
    if(grau < 1 ){
        if(grau == 0){
            return poli[0];
        }else printf("\nGrau para o Polinomio Invalido\n");
    }

    for(int i=grau;i!=0;i--){
        resultado += poli[i] * pow(x,i);
        //printf("\n%lf = %lf + %lf\n",resultado,poli[i],pow(x,i));
    }
    resultado += poli[0];

    return resultado;
}

/*    2.5) Implemente uma função que permita a avaliação de polinômios. Cada polinômio é
definido por um vetor que contém seus coeficientes. Por exemplo, o polinômio de
grau 2, 3x2 + 2x+ 12, terá um vetor de coeficientes igual a vet[] = {12, 2, 3}. A
função deve obedecer o seguinte protótipo: double avalia (double* poli, int
grau, double x), onde poli é o vetor de coeficientes; grau é o grau do polinômio;
x é o valor da variável.
*/