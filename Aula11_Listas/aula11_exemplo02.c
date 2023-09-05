#include <stdio.h>
#include <stdlib.h>

/*Lista sequencial est�tica ou Lista Linear Est�tica � um
tipo de Lista onde o sucessor de um elemento ocupa a posi��o
f�sica seguinte do mesmo (uso de array).

Vanatagens do uso de arrays:
 - acesso r�pido e direto aos elementos (�ndice)
 - tempo constante para acessar um elemento
 - facilidade em modificar informa��es

Desvantagens do uso de arrays:
 - defini��o pr�via do tamanho do array
 - dificuldade para inserir e remover um elemento
   entre outros dois: � necess�rio deslocar os elementos

Quando utilizar essa Lista?
    - listas pequenas
    - inser��o/remo��o apenas no final da lista
    - tamanho m�ximo bem definido
    - a busca � a opera��o mais frequente
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

typedef struct{
    int dados[MAX_SIZE];
    int length; //N�mero de elementos atualmente na lista
} ListaEstatica;

//recebe um ponteiro para uma lista est�tica
//e a inicializa como vazia
void inicializaLista(ListaEstatica *list){
    list->length = 0;
}

// Prot�tipo da fun��o
int insereElemento(ListaEstatica *list, int value);

/*Um ponteiro constante para ListaEstatica indica um ponteiro que n�o pode
 ser usado para modificar os valores dentro da estrutura, ou seja, voc� n�o
 pode alterar os campos da estrutura atrav�s desse ponteiro. No entanto, voc�
 ainda pode usar esse ponteiro para acessar e ler os valores dos campos da estrutura.
*/
void mostrarLista(const ListaEstatica *list){
    printf("Elementos da lista: ");
    //a condi��o de parada � quando i for menor que o campo length
    for(int i = 0; i< list->length; i++){
        printf("%d ", list->dados[i]);
    }
    printf("\n");
}

int main(){
    ListaEstatica minhaLista;
    inicializaLista(&minhaLista);

    insereElemento(&minhaLista, 5);
    insereElemento(&minhaLista, 10);
    insereElemento(&minhaLista, 15);

    mostrarLista(&minhaLista);

    return 0;
}


//Recebe um ponteiro para ListaEstatica e um valor a ser inserido na lista
int insereElemento(ListaEstatica *list, int valor){
    //o comprimento da lista � maior ou igual ao tamanho m�ximo
    if(list->length >= MAX_SIZE){
        return 0;//A lista est� cheia, n�o � poss�vel inserir
    }
    /*O valor � inserido no array dados, na posi��o length (que � a pr�xima
     posi��o dispon�vel na lista). O campo length � incrementado para indicar que
     um elemento foi adicionado a lista
    */
    list ->dados[list->length] = valor;
    list->length++;
    return 1; //Inser��o bem-sucedida
}
