/* Esse programa demonstra a implementação de uma lista
sequencial estática em C, com funções para inicialização,
inserção, retirada e impressão de elementos.
*/

#include <stdio.h>
#include <stdlib.h>

#define INICIO 0
#define MAXTAM 1000

typedef struct {
    int chave;
    /* outros componentes */
} TItem;

typedef struct {
    TItem item[MAXTAM];
    int primeiro, ultimo;
} TLista;

/* procedimentos e funcoes da TAD */

/* Inicializa a lista tornando o primeiro e último índices iguais a INICIO
    a função TLista_FazVazia inicializa a lista passada como argumento
*/
void TLista_FazVazia(TLista *pLista) {
    pLista->primeiro = INICIO;
    pLista->ultimo = pLista->primeiro;
    printf("Lista foi inicializada vazia.\n");
}

// Verifica se a lista está vazia, retornando 1 se verdadeiro e 0 caso contrário
int TLista_EhVazia(TLista *pLista) {
    return (pLista->ultimo == pLista->primeiro);
}

// Insere um item x no final da lista
int TLista_Insere(TLista *pLista, TItem x) {
    //Verifica se a lista está cheia
    if (pLista->ultimo == MAXTAM)
        return 0; /* lista cheia */
    //insere o item na prosição ultimo do array item
    pLista->item[pLista->ultimo++] = x;
    printf("Item %d foi inserido na lista.\n", x.chave);
    return 1;
}

// Retira um item da posição p da lista
int TLista_Retira(TLista *pLista, int p, TItem *pX) {

    //Verifica se a lista está vazia ou se p é maior ou igual a ultimo
    if (TLista_EhVazia(pLista) || p >= pLista->ultimo)
        return 0;
    int cont;
    //armazena o item a ser retirado em pX
    *pX = pLista->item[p];
    pLista->ultimo--;

    // Desloca elementos para a esquerda, preenchendo o espaço vazio
    for (cont = p + 1; cont <= pLista->ultimo; cont++)
        pLista->item[cont - 1] = pLista->item[cont];

    printf("Item %d foi retirado da lista.\n", (*pX).chave);
    return 1;
}

// Imprime os elementos da lista
void TLista_Imprime(TLista *pLista) {
    if (TLista_EhVazia(pLista)) {
        printf("A lista está vazia.\n");
        return;
    }

    printf("Elementos na lista:\n");

    //inicializa a variável i com o valor de pLista->primeiro
    for (int i = pLista->primeiro; i < pLista->ultimo; i++)
        printf("%d ", pLista->item[i].chave);
    printf("\n");
}

int main() {
    TLista lista;
    TItem item;
    TLista_FazVazia(&lista);

    item.chave = 10;
    TLista_Insere(&lista, item);

    item.chave = 20;
    TLista_Insere(&lista, item);

    item.chave = 30;
    TLista_Insere(&lista, item);

    printf("Lista após inserções:\n");
    TLista_Imprime(&lista);

    return 0;
}
