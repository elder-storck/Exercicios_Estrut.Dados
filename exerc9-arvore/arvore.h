#include"tipoDaLista.h"

typedef struct arv Arv;

//Cria uma árvore vazia
Arv* arv_criavazia (void);

//cria uma árvore com a informação do nó raiz c, e
//com subárvore esquerda e e subárvore direita d
Arv* arv_cria (Aluno_t* al, Arv* e, Arv* d);

//libera o espaço de memória ocupado pela árvore a
Arv* arv_libera (Arv* a);

//retorna true se a árvore estiver vazia e false caso contrário
int arv_vazia (Arv* a);

//indica a ocorrência (1) ou não (0) do caracter c
int arv_pertence (Arv* a, char* nomeAl);

//imprime as informações dos nós da árvore
void arv_imprime (Arv* a);

//retorna o número de folhas da árvore
int folhas (Arv* a);

//retorna o número de vezes que o aluno aparece na árvore
int ocorrencias (Arv* a , char* nomeAl);

//retorna a altura da árvore
int altura (Arv* a); 