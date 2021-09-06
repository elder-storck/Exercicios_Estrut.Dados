#include"arvore.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    Aluno_t* al1 = iniciaAluno_Aluno("al1",01,10);
    Aluno_t* al2 = iniciaAluno_Aluno("al2",02,10);
    Aluno_t* al3 = iniciaAluno_Aluno("al3",03,10);
    Aluno_t* al4 = iniciaAluno_Aluno("al4",04,10);
    Aluno_t* al5 = iniciaAluno_Aluno("al5",05,10);
    Aluno_t* al6 = iniciaAluno_Aluno("al6",06,10);
    

    //nivel das folhas 
    Arv* arv1 = arv_cria(al1,arv_criavazia(),arv_criavazia());
    Arv* arv2 = arv_cria(al2,arv_criavazia(),arv_criavazia());
    Arv* arv3 = arv_cria(al3,arv_criavazia(),arv_criavazia());
    //nivel do no
    Arv* arv4 = arv_cria(al2,arv3,arv_criavazia());
    Arv* arv5 = arv_cria(al5,arv1,arv2);
    //nivel raiz
    Arv* arv = arv_cria(al2,arv5,arv4);

    arv_imprime(arv);
    printf("\n\nQtd de folhas da Arv:%d",folhas(arv));
    printf("\n\nAltura da Arv:%d",altura(arv));
    
    printf("\n\nSe aluno pertence a árvore se numero eh 1:\n");
    printf("%s:%d\t",_retornaNome_Aluno(al1),arv_pertence(arv,_retornaNome_Aluno(al1)));
    printf("%s:%d\t",_retornaNome_Aluno(al2),arv_pertence(arv,_retornaNome_Aluno(al2)));
    printf("%s:%d\t",_retornaNome_Aluno(al3),arv_pertence(arv,_retornaNome_Aluno(al3)));
    printf("%s:%d\t",_retornaNome_Aluno(al4),arv_pertence(arv,_retornaNome_Aluno(al4)));
    printf("%s:%d\t",_retornaNome_Aluno(al5),arv_pertence(arv,_retornaNome_Aluno(al5)));
    printf("%s:%d\t",_retornaNome_Aluno(al6),arv_pertence(arv,_retornaNome_Aluno(al6)));
    printf("\n\n");

    printf("Qtd de ocorencias de %s : %d\n",_retornaNome_Aluno(al1),ocorrencias(arv,_retornaNome_Aluno(al1)));
    printf("Qtd de ocorencias de %s : %d\n",_retornaNome_Aluno(al2),ocorrencias(arv,_retornaNome_Aluno(al2)));
    printf("Qtd de ocorencias de %s : %d\n",_retornaNome_Aluno(al3),ocorrencias(arv,_retornaNome_Aluno(al3)));
    printf("Qtd de ocorencias de %s : %d\n",_retornaNome_Aluno(al4),ocorrencias(arv,_retornaNome_Aluno(al4)));
    printf("Qtd de ocorencias de %s : %d\n",_retornaNome_Aluno(al5),ocorrencias(arv,_retornaNome_Aluno(al5)));
    printf("Qtd de ocorencias de %s : %d\n",_retornaNome_Aluno(al6),ocorrencias(arv,_retornaNome_Aluno(al6)));
            
    arv_libera(arv);    
    libera_Aluno(al1);
    libera_Aluno(al2);
    libera_Aluno(al3);
    libera_Aluno(al4);
    libera_Aluno(al5);
    libera_Aluno(al6);
}
