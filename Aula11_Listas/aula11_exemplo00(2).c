#include <stdio.h>
#include <stdbool.h>  // Necess�rio para usar o tipo booleano

#define MAXLISTA 1000  // Tamanho m�ximo da lista

//C�digos de erro para quando a lista estiver cheia, vazia ou com posi��o inv�lida
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


// FUN��O: Verifica se a lista est� cheia
bool listaCheia() {
    if (aLista.ultimo == MAXLISTA - 1)
        return true;  // Se o �ltimo �ndice for igual ao m�ximo - 1, a lista est� cheia
    else
        return false;
}

// FUN��O: Verifica se a lista est� vazia
bool listaVazia() {
    /*
        Quando a lista est� vazia, n�o h� elementos v�lidos,
        assim, n�o haver� o "ultimo" elemento definido. Por
        conven��o define-se aLista.ultimo como -1 para sinalizar
        que a lista est� vazia.
    */
    if (aLista.ultimo == -1)
        // Se o �ltimo �ndice for igual a -1, a lista est� vazia
        return true;
    else
        return false;
}


// FUN��O: Adiciona um dado no final da lista
int adiciona(int dado) {
    if (listaCheia()) {
        return ERROLISTACHEIA;
    } else {
        /*incrementa o �ndice ultimo,
        indica que um novo elemento ser� inserido
        na pr�xima posi��o vazia
        */
        aLista.ultimo++;
        //armazena o dado no array dados, na posicao ultimo que foi incrmentada
        aLista.dados[aLista.ultimo] = dado;
        //retorna o �ndice �ltimo ap�s a inser��o
        return aLista.ultimo;
    }
}

// FUN��O: Retira um dado do final da lista
int retira() {
    if (listaVazia()) {
        return ERROLISTAVAZIA;
    } else {
        /*O valor do �ltimo elemento v�lido (que ser�
        retirado) � armazenado na vari�vel valor
        */
        int valor = aLista.dados[aLista.ultimo];
        /*decrementa o �ndice ultimo, indicando que um
        elemento foi removido do final da lista
        */
        aLista.ultimo--;
        return valor;
    }
}

// FUN��O: Adiciona um dado no in�cio da lista
int adicionaNoInicio(int dado) {
    if (listaCheia()) {
        return ERROLISTACHEIA;
    } else {
        /*O �ndice do �ltimo elemento v�lido � incrementado,
        indicando que um novo elemento ser� inserido */
        aLista.ultimo++;
        /*O valor do �ndice "ultimo" � armazenado na vari�vel posicao*/
        int posicao = aLista.ultimo;
        while (posicao > 0) {
            /*Os valores dos elementos s�o movidos uma posi��o � frente,
            para abrir espa�o para o novo elemento no in�cio.
            */
            aLista.dados[posicao] =
            aLista.dados[posicao - 1];
            /*O �ndice posicao � decrementado para mover para a pr�xima
            posi��o anterior na lista.
            */
            posicao--;
        }
        aLista.dados[0] = dado;
        return 0;
    }
}

// FUN��O: Retira um dado do in�cio da lista
int retiraDoInicio() {
    if (listaVazia()) {
        return ERROLISTAVAZIA;
    } else {
        /*O valor do primeiro elemento � armazenado na vari�vel valor.
         Isso permite que o valor seja retornado no final da fun��o.
        */
        int valor = aLista.dados[0];
        /*O �ndice do �ltimo elemento v�lido � decrementado,
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

// FUN��O: Adiciona um dado na posi��o especificada na lista
int adicionaNaPosicao(int dado, int destino) {
    if (listaCheia()) {
        return ERROLISTACHEIA;
    } else {
        /*verifica se a posi��o de destino � v�lida (se est� dentro dos limites aceit�veis
        Ou seja, se a posi��o de destino � maior do que a pr�xima posi��o
        vazia ap�s o �ltimo elemento*/
        if (destino > aLista.ultimo + 1 || destino < 0) {
            return ERROPOSICAO;
        }
        //incrementa o �ndice ultimo para indicar que a lista ter� um elemento a mais
        aLista.ultimo++;
        int posicao = aLista.ultimo;
        while (posicao > destino) {
            //move os itens para a direita para abrir espa�o para o novo dado
            /*Dentro do loop, o valor do elemento na posi��o atual (aLista.dados[posicao])
            � substitu�do pelo valor do elemento � sua esquerda (aLista.dados[posicao - 1]),
             movendo todos os elementos uma posi��o para a direita.
            */
            aLista.dados[posicao] = aLista.dados[posicao - 1];
            posicao--;
        }
        //ap�s o loop, o dado � inserido na posi��o de destino
        aLista.dados[destino] = dado;
        return destino;
    }
}

// FUN��O: Adiciona um dado no final da lista
int adiciona(int dado) {
    if (listaCheia()) {
        return ERROLISTACHEIA;
    } else {
        /*O �ndice do �ltimo elemento v�lido � incrementado,
        indicando que um novo elemento ser� inserido.
        */
        aLista.ultimo++;
        /*O valor dado � armazenado no array dados da lista,
        na posi��o do �ndice ultimo rec�m-incrementado.*/
        aLista.dados[aLista.ultimo] = dado;
        return aLista.ultimo;
    }
}

// FUN��O: Retira um dado do final da lista
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
