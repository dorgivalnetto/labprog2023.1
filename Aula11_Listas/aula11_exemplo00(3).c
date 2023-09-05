#include <stdio.h>
#include <stdbool.h>  // Necessário para usar o tipo booleano

#define MAXLISTA 1000  // Tamanho máximo da lista
#define ERROLISTACHEIA -1
#define ERROLISTAVAZIA -2
#define ERROPOSICAO -3

typedef struct {
    int dados[MAXLISTA];
    int ultimo;
    /* outros componentes */
} TLista;

// Variável global para a lista
TLista aLista;




// Verifica se a lista está cheia
bool listaCheia() {
    if (aLista.ultimo == MAXLISTA - 1)
        return true;  // Se o último índice for igual ao máximo - 1, a lista está cheia
    else
        return false;
}

// Verifica se a lista está vazia
bool listaVazia() {
    if (aLista.ultimo == -1)
        return true;  // Se o último índice for igual a -1, a lista está vazia
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
        printf("A lista está vazia. Não é possível retirar.\n");

    adicionaNoInicio(5);
    printf("Item adicionado no início da lista.\n");

    resultado = retiraDoInicio();
    if (resultado != ERROLISTAVAZIA)
        printf("Item retirado do início da lista: %d\n", resultado);
    else
        printf("A lista está vazia. Não é possível retirar do início.\n");

    resultado = adicionaNaPosicao(25, 1);
    if (resultado != ERROLISTACHEIA && resultado != ERROPOSICAO)
        printf("Item adicionado na posição %d da lista.\n", resultado);
    else if (resultado == ERROLISTACHEIA)
        printf("A lista está cheia. Não é possível adicionar na posição.\n");
    else if (resultado == ERROPOSICAO)
        printf("Posição inválida. Não é possível adicionar na posição.\n");

    return 0;
}

