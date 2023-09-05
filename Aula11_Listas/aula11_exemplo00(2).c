#include <stdio.h>
#include <stdbool.h>  // Necessário para usar o tipo booleano

#define MAXLISTA 1000  // Tamanho máximo da lista

//Códigos de erro para quando a lista estiver cheia, vazia ou com posição inválida
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


// FUNÇÃO: Verifica se a lista está cheia
bool listaCheia() {
    if (aLista.ultimo == MAXLISTA - 1)
        return true;  // Se o último índice for igual ao máximo - 1, a lista está cheia
    else
        return false;
}

// FUNÇÃO: Verifica se a lista está vazia
bool listaVazia() {
    /*
        Quando a lista está vazia, não há elementos válidos,
        assim, não haverá o "ultimo" elemento definido. Por
        convenção define-se aLista.ultimo como -1 para sinalizar
        que a lista está vazia.
    */
    if (aLista.ultimo == -1)
        // Se o último índice for igual a -1, a lista está vazia
        return true;
    else
        return false;
}


// FUNÇÃO: Adiciona um dado no final da lista
int adiciona(int dado) {
    if (listaCheia()) {
        return ERROLISTACHEIA;
    } else {
        /*incrementa o índice ultimo,
        indica que um novo elemento será inserido
        na próxima posição vazia
        */
        aLista.ultimo++;
        //armazena o dado no array dados, na posicao ultimo que foi incrmentada
        aLista.dados[aLista.ultimo] = dado;
        //retorna o índice último após a inserção
        return aLista.ultimo;
    }
}

// FUNÇÃO: Retira um dado do final da lista
int retira() {
    if (listaVazia()) {
        return ERROLISTAVAZIA;
    } else {
        /*O valor do último elemento válido (que será
        retirado) é armazenado na variável valor
        */
        int valor = aLista.dados[aLista.ultimo];
        /*decrementa o índice ultimo, indicando que um
        elemento foi removido do final da lista
        */
        aLista.ultimo--;
        return valor;
    }
}

// FUNÇÃO: Adiciona um dado no início da lista
int adicionaNoInicio(int dado) {
    if (listaCheia()) {
        return ERROLISTACHEIA;
    } else {
        /*O índice do último elemento válido é incrementado,
        indicando que um novo elemento será inserido */
        aLista.ultimo++;
        /*O valor do índice "ultimo" é armazenado na variável posicao*/
        int posicao = aLista.ultimo;
        while (posicao > 0) {
            /*Os valores dos elementos são movidos uma posição à frente,
            para abrir espaço para o novo elemento no início.
            */
            aLista.dados[posicao] =
            aLista.dados[posicao - 1];
            /*O índice posicao é decrementado para mover para a próxima
            posição anterior na lista.
            */
            posicao--;
        }
        aLista.dados[0] = dado;
        return 0;
    }
}

// FUNÇÃO: Retira um dado do início da lista
int retiraDoInicio() {
    if (listaVazia()) {
        return ERROLISTAVAZIA;
    } else {
        /*O valor do primeiro elemento é armazenado na variável valor.
         Isso permite que o valor seja retornado no final da função.
        */
        int valor = aLista.dados[0];
        /*O índice do último elemento válido é decrementado,
        indicando que um elemento foi retirado da lista.
        */
        aLista.ultimo--;
        int posicao = 0;
        while (posicao <= aLista.ultimo) {
            aLista.dados[posicao] =
            aLista.dados[posicao + 1];
            posicao++;
        }
        return valor;
    }
}

// FUNÇÃO: Adiciona um dado na posição especificada na lista
int adicionaNaPosicao(int dado, int destino) {
    if (listaCheia()) {
        return ERROLISTACHEIA;
    } else {
        /*verifica se a posição de destino é válida (se está dentro dos limites aceitáveis
        Ou seja, se a posição de destino é maior do que a próxima posição
        vazia após o último elemento*/
        if (destino > aLista.ultimo + 1 || destino < 0) {
            return ERROPOSICAO;
        }
        //incrementa o índice ultimo para indicar que a lista terá um elemento a mais
        aLista.ultimo++;
        int posicao = aLista.ultimo;
        while (posicao > destino) {
            //move os itens para a direita para abrir espaço para o novo dado
            /*Dentro do loop, o valor do elemento na posição atual (aLista.dados[posicao])
            é substituído pelo valor do elemento à sua esquerda (aLista.dados[posicao - 1]),
             movendo todos os elementos uma posição para a direita.
            */
            aLista.dados[posicao] = aLista.dados[posicao - 1];
            posicao--;
        }
        //após o loop, o dado é inserido na posição de destino
        aLista.dados[destino] = dado;
        return destino;
    }
}

// FUNÇÃO: Adiciona um dado no final da lista
int adiciona(int dado) {
    if (listaCheia()) {
        return ERROLISTACHEIA;
    } else {
        /*O índice do último elemento válido é incrementado,
        indicando que um novo elemento será inserido.
        */
        aLista.ultimo++;
        /*O valor dado é armazenado no array dados da lista,
        na posição do índice ultimo recém-incrementado.*/
        aLista.dados[aLista.ultimo] = dado;
        return aLista.ultimo;
    }
}

// FUNÇÃO: Retira um dado do final da lista
int retira() {
    if (listaVazia()) {
        return ERROLISTAVAZIA;
    } else {
        int valor = aLista.dados[aLista.ultimo];
        aLista.ultimo--;
        return valor;
    }
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
