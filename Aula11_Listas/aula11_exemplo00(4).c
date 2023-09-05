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

// FUNÇÃO: Adiciona um dado na posição especificada na lista
int adicionaNaPosicao(int dado, int destino) {
    if (listaCheia()) {
        return ERROLISTACHEIA;
    } else {
        if (destino > aLista.ultimo + 1 || destino < 0) {
            return ERROPOSICAO;
        }
        aLista.ultimo++;
        int pos = aLista.ultimo;
        while (pos > destino) {
            aLista.dados[pos] = aLista.dados[pos - 1];
            pos--;
        }
        aLista.dados[destino] = dado;
        return destino;
    }
}

// FUNÇÃO: Retira um dado da posição especificada na lista
int retiraDaPosicao(int fonte) {
    if (fonte > aLista.ultimo || fonte < 0) {
        return ERROPOSICAO;
    } else {
        if (listaVazia()) {
            return ERROLISTAVAZIA;
        } else {
            //o valor do elemento na posição fonte é armazenado na variável valor
            int valor = aLista.dados[fonte];
            //o índice ultimo é decrementado para indicar que a lista terá um elemento a menos
            aLista.ultimo--;
            int posicao = fonte;
            while (posicao <= aLista.ultimo) {
                //move os elementos uma posição para a esquerda
                aLista.dados[posicao] = aLista.dados[posicao + 1];
                posicao++;
            }
            return valor;
        }
    }
}

// FUNÇÃO: Verifica se um dado é maior que outro
bool maior(int dado1, int dado2) {
    if (dado1 > dado2)
        return true;
    else
        return false;
}

// FUNÇÃO: Adiciona um dado em ordem na lista
int adicionaEmOrdem(int dado) {
    if (listaCheia()) {
        return ERROLISTACHEIA;
    } else {
        int posicao = 0;
        /*percorre a lista enquanto a posição é menor ou igual ao índice do último
        elemento e o valor "dado" é maior que o valor na posição atual.*/
        while (posicao <= aLista.ultimo &&
               maior(dado, aLista.dados[posicao])) {
            posicao++;
        }
        return adicionaNaPosicao(dado, posicao);
    }
}


// FUNÇÃO: Retorna a posição de um dado na lista
int posicao(int dado) {
    int pos = 0;
    /*percorre a lista enquanto a posição é menor ou igual ao
    índice do último elemento e o valor dado não é igual ao
    valor na posição atual.*/
    while (pos <= aLista.ultimo && dado != aLista.dados[pos]) {
        pos++;
    }
    //verifica se pos ultrapassou o índice do último elemento.
    if (pos > aLista.ultimo)
        return ERROPOSICAO;
    else
        //retorna a posição onde o valor dado foi encontrado na lista.
        return pos;
}


// FUNÇÃO: Retira um dado específico da lista
int retiraEspecifico(int dado) {
    if (listaVazia()) {
        return ERROLISTAVAZIA;
    } else {
        /*A função posicao() é chamada para encontrar a posição do valor
         dado na lista*/
        int pos = posicao(dado);
        if (pos < 0) {
            return ERROPOSICAO;
        } else {
            return retiraDaPosicao(pos);
        }
    }
}

int main() {
    int resultado;
    adicionaEmOrdem(20);
    adicionaEmOrdem(10);
    adicionaEmOrdem(30);
    printf("Itens adicionados em ordem na lista.\n");

    resultado = retiraEspecifico(10);
    if (resultado != ERROLISTAVAZIA && resultado != ERROPOSICAO)
        printf("Item retirado da lista: %d\n", resultado);
    else if (resultado == ERROLISTAVAZIA)
        printf("A lista está vazia. Não é possível retirar.\n");
    else if (resultado == ERROPOSICAO)
        printf("Posição inválida. Não é possível retirar.\n");

    return 0;
}

