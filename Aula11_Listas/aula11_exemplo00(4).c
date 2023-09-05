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

// FUN��O: Adiciona um dado na posi��o especificada na lista
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

// FUN��O: Retira um dado da posi��o especificada na lista
int retiraDaPosicao(int fonte) {
    if (fonte > aLista.ultimo || fonte < 0) {
        return ERROPOSICAO;
    } else {
        if (listaVazia()) {
            return ERROLISTAVAZIA;
        } else {
            //o valor do elemento na posi��o fonte � armazenado na vari�vel valor
            int valor = aLista.dados[fonte];
            //o �ndice ultimo � decrementado para indicar que a lista ter� um elemento a menos
            aLista.ultimo--;
            int posicao = fonte;
            while (posicao <= aLista.ultimo) {
                //move os elementos uma posi��o para a esquerda
                aLista.dados[posicao] = aLista.dados[posicao + 1];
                posicao++;
            }
            return valor;
        }
    }
}

// FUN��O: Verifica se um dado � maior que outro
bool maior(int dado1, int dado2) {
    if (dado1 > dado2)
        return true;
    else
        return false;
}

// FUN��O: Adiciona um dado em ordem na lista
int adicionaEmOrdem(int dado) {
    if (listaCheia()) {
        return ERROLISTACHEIA;
    } else {
        int posicao = 0;
        /*percorre a lista enquanto a posi��o � menor ou igual ao �ndice do �ltimo
        elemento e o valor "dado" � maior que o valor na posi��o atual.*/
        while (posicao <= aLista.ultimo &&
               maior(dado, aLista.dados[posicao])) {
            posicao++;
        }
        return adicionaNaPosicao(dado, posicao);
    }
}


// FUN��O: Retorna a posi��o de um dado na lista
int posicao(int dado) {
    int pos = 0;
    /*percorre a lista enquanto a posi��o � menor ou igual ao
    �ndice do �ltimo elemento e o valor dado n�o � igual ao
    valor na posi��o atual.*/
    while (pos <= aLista.ultimo && dado != aLista.dados[pos]) {
        pos++;
    }
    //verifica se pos ultrapassou o �ndice do �ltimo elemento.
    if (pos > aLista.ultimo)
        return ERROPOSICAO;
    else
        //retorna a posi��o onde o valor dado foi encontrado na lista.
        return pos;
}


// FUN��O: Retira um dado espec�fico da lista
int retiraEspecifico(int dado) {
    if (listaVazia()) {
        return ERROLISTAVAZIA;
    } else {
        /*A fun��o posicao() � chamada para encontrar a posi��o do valor
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
        printf("A lista est� vazia. N�o � poss�vel retirar.\n");
    else if (resultado == ERROPOSICAO)
        printf("Posi��o inv�lida. N�o � poss�vel retirar.\n");

    return 0;
}

