/* Esse programa demonstra a implementa��o de uma lista
sequencial est�tica em C, com fun��es para inicializa��o,
inser��o, retirada e impress�o de elementos.
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

/* Inicializa a lista tornando o primeiro e �ltimo �ndices iguais a INICIO
    a fun��o TLista_FazVazia inicializa a lista passada como argumento
*/
void TLista_FazVazia(TLista *pLista) {
    pLista->primeiro = INICIO;
    pLista->ultimo = pLista->primeiro;
    printf("Lista foi inicializada vazia.\n");
}

// Verifica se a lista est� vazia, retornando 1 se verdadeiro e 0 caso contr�rio
int TLista_EhVazia(TLista *pLista) {
    return (pLista->ultimo == pLista->primeiro);
}

// Insere um item x no final da lista
int TLista_Insere(TLista *pLista, TItem x) {
    //Verifica se a lista est� cheia
    if (pLista->ultimo == MAXTAM)
        return 0; /* lista cheia */
    //insere o item na prosi��o ultimo do array item
    pLista->item[pLista->ultimo++] = x;
    printf("Item %d foi inserido na lista.\n", x.chave);
    return 1;
}

// Retira um item da posi��o p da lista
int TLista_Retira(TLista *pLista, int p, TItem *pX) {

    //Verifica se a lista est� vazia ou se p � maior ou igual a ultimo
    if (TLista_EhVazia(pLista) || p >= pLista->ultimo)
        return 0;
    int cont;
    //armazena o item a ser retirado em pX
    *pX = pLista->item[p];
    pLista->ultimo--;

    // Desloca elementos para a esquerda, preenchendo o espa�o vazio
    for (cont = p + 1; cont <= pLista->ultimo; cont++)
        pLista->item[cont - 1] = pLista->item[cont];

    printf("Item %d foi retirado da lista.\n", (*pX).chave);
    return 1;
}

// Imprime os elementos da lista
void TLista_Imprime(TLista *pLista) {
    if (TLista_EhVazia(pLista)) {
        printf("A lista est� vazia.\n");
        return;
    }

    printf("Elementos na lista:\n");

    //inicializa a vari�vel i com o valor de pLista->primeiro
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

    printf("Lista ap�s inser��es:\n");
    TLista_Imprime(&lista);

    return 0;
}
