#include <stdio.h>
#include <stdbool.h>  // Necess�rio para usar o tipo booleano

#define MAXLISTA 1000  // Tamanho m�ximo da lista
#define ERROLISTACHEIA -1
#define ERROLISTAVAZIA -2
#define ERROPOSICAO -3

typedef struct {
    int dados[MAXLISTA];
    int ultimo;
    /* outros componentes */
} TLista;

// Vari�vel global para a lista
TLista aLista;




// Verifica se a lista est� cheia
bool listaCheia() {
    if (aLista.ultimo == MAXLISTA - 1)
        return true;  // Se o �ltimo �ndice for igual ao m�ximo - 1, a lista est� cheia
    else
        return false;
}

// Verifica se a lista est� vazia
bool listaVazia() {
    if (aLista.ultimo == -1)
        return true;  // Se o �ltimo �ndice for igual a -1, a lista est� vazia
    else
        return false;
}

int main() {
    int resultado;
    adiciona(10);
    adiciona(20);
    adiciona(30);
    printf("Itens adicionados na lista.\n");

    resultado = retira();
    if (resultado != ERROLISTAVAZIA)
        printf("Item retirado da lista: %d\n", resultado);
    else
        printf("A lista est� vazia. N�o � poss�vel retirar.\n");

    adicionaNoInicio(5);
    printf("Item adicionado no in�cio da lista.\n");

    resultado = retiraDoInicio();
    if (resultado != ERROLISTAVAZIA)
        printf("Item retirado do in�cio da lista: %d\n", resultado);
    else
        printf("A lista est� vazia. N�o � poss�vel retirar do in�cio.\n");

    resultado = adicionaNaPosicao(25, 1);
    if (resultado != ERROLISTACHEIA && resultado != ERROPOSICAO)
        printf("Item adicionado na posi��o %d da lista.\n", resultado);
    else if (resultado == ERROLISTACHEIA)
        printf("A lista est� cheia. N�o � poss�vel adicionar na posi��o.\n");
    else if (resultado == ERROPOSICAO)
        printf("Posi��o inv�lida. N�o � poss�vel adicionar na posi��o.\n");

    return 0;
}

