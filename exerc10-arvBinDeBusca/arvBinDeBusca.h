#include "tipoDaLista.h"

typedef struct arv Arv_t;



/* 
 * Função que cria uma árvore vazia
 * Pré-condição: Nada
 * Pós-condição: Ponteiro recebendo NULL
 * Input: nada
 * Output: NULL
 */
Arv_t* abb_cria(void);

/* 
 * Função que exibe na tela a árvore 
 * Pré-condição: nenhuma
 * Pós-condição: nenhuma
 * Input: árvore
 * Output: nenhum
 */
void abb_exibe(Arv_t* a);

/* 
 * Função que retorna árvore por matrícula 
 * Pré-condição: árvore existe
 * Pós-condição: nenhuma
 * Input: árvore, chave que é a matricula do aluno
 * Output: árvore que tem aluno ou NULL, caso não encontrar
 */
Arv_t* abb_busca (Arv_t* a,int chave);

/* 
 * Função que insere nó como folha na árvore  
 * Pré-condição: árvore existe
 * Pós-condição: Nó criado com aluno e adicionado a árvore principal
 * Input: ponteiro para árvore, ponteiro para aluno
 * Output: nó criado com aluno
 */
Arv_t* abb_insere (Arv_t* a,Aluno_t* al);

/* 
 * Função que retira nó com base na chave  
 * Pré-condição: nenhuma
 * Pós-condição: Nó retirado da árvore principal, aluno não liberado
 * Input: ponteiro para árvore, chave de busca (matrícula do aluno)
 * Output: ponteiro NULL ou ponteiro para árvore
 */
Arv_t* abb_retira (Arv_t* a,int chave);

/* 
 * Função que libera toda árvore  
 * Pré-condição: nenhuma
 * Pós-condição: árvore liberada, aluno NÂO liberado
 * Input: ponteiro para árvore
 * Output: NULL
 */
Arv_t* abb_libera (Arv_t* a);

/* 
 * Função que exibe os ponteiros entre os nós da árvore  
 * Pré-condição: árvore existente
 * Pós-condição: nenhuma
 * Input: ponteiro para árvore
 * Output: nenhuma
 * OBS: função para o padrão do site GraphvizOnline
 */
void abb_exibePonteiros(Arv_t* a);

/* 
 * Função que retorna ponteiro para aluno da árvore  
 * Pré-condição: árvore existente
 * Pós-condição: nenhuma
 * Input: ponteiro para árvore
 * Output: ponteiro para aluno
 */
Aluno_t* abb_retornaAluno (Arv_t* a);