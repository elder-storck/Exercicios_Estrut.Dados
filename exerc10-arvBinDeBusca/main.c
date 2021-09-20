#include<stdio.h>
#include<stdlib.h>

#include"arvBinDeBusca.h"

int main(){

    Aluno_t* al1 = aluno_inicia("al1",01,10);
    Aluno_t* al2 = aluno_inicia("al2",02,10);
    Aluno_t* al3 = aluno_inicia("al3",03,10);
    Aluno_t* al4 = aluno_inicia("al4",04,10);
    Aluno_t* al5 = aluno_inicia("al5",05,10);
    Aluno_t* al6 = aluno_inicia("al6",06,10);
    
    Arv_t* a = abb_cria();
    a = abb_insere(a,al4);
    a = abb_insere(a,al2);
    a = abb_insere(a,al5);
    a = abb_insere(a,al1);
    a = abb_insere(a,al3);
    a = abb_insere(a,al6);
    printf("\n\nÁrvore binária de busca:\n");
    abb_exibe(a);


    printf("\n\nponteiros:\n");
    abb_exibePonteiros(a);

    printf("\n\nExibindo alunos 01,02,05:\n");
    aluno_exibe(abb_retornaAluno(abb_busca(a,01)));
    aluno_exibe(abb_retornaAluno(abb_busca(a,02)));
    aluno_exibe(abb_retornaAluno(abb_busca(a,05)));

    printf("\n\nRETIRANDO DA ÁRVORE:\nalunos com matrícula 02,05 e 06");
    a = abb_retira(a,02);
    a = abb_retira(a,05);
    a = abb_retira(a,06);

    printf("\n\nÁrvore binária de busca:\n");
    abb_exibe(a);

    printf("\n\nADICIONANDO NA ÁRVORE:\nalunos com matrícula 02,05 e 06");
    a = abb_insere(a,al2);
    a = abb_insere(a,al5);
    a = abb_insere(a,al6);

    printf("\n\nÁrvore binária de busca:\n");
    abb_exibe(a);


    abb_libera(a);
    aluno_libera(al1);
    aluno_libera(al2);
    aluno_libera(al3);
    aluno_libera(al4);
    aluno_libera(al5);
    aluno_libera(al6);
}