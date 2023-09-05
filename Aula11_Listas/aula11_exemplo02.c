#include <stdio.h>
#include <stdlib.h>

/*Lista sequencial estática ou Lista Linear Estática é um
tipo de Lista onde o sucessor de um elemento ocupa a posição
física seguinte do mesmo (uso de array).

Vanatagens do uso de arrays:
 - acesso rápido e direto aos elementos (índice)
 - tempo constante para acessar um elemento
 - facilidade em modificar informações

Desvantagens do uso de arrays:
 - definição prévia do tamanho do array
 - dificuldade para inserir e remover um elemento
   entre outros dois: é necessário deslocar os elementos

Quando utilizar essa Lista?
    - listas pequenas
    - inserção/remoção apenas no final da lista
    - tamanho máximo bem definido
    - a busca é a operação mais frequente
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

typedef struct{
    int dados[MAX_SIZE];
    int length; //Número de elementos atualmente na lista
} ListaEstatica;

//recebe um ponteiro para uma lista estática
//e a inicializa como vazia
void inicializaLista(ListaEstatica *list){
    list->length = 0;
}

// Protótipo da função
int insereElemento(ListaEstatica *list, int value);

/*Um ponteiro constante para ListaEstatica indica um ponteiro que não pode
 ser usado para modificar os valores dentro da estrutura, ou seja, você não
 pode alterar os campos da estrutura através desse ponteiro. No entanto, você
 ainda pode usar esse ponteiro para acessar e ler os valores dos campos da estrutura.
*/
void mostrarLista(const ListaEstatica *list){
    printf("Elementos da lista: ");
    //a condição de parada é quando i for menor que o campo length
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
    //o comprimento da lista é maior ou igual ao tamanho máximo
    if(list->length >= MAX_SIZE){
        return 0;//A lista está cheia, não é possível inserir
    }
    /*O valor é inserido no array dados, na posição length (que é a próxima
     posição disponível na lista). O campo length é incrementado para indicar que
     um elemento foi adicionado a lista
    */
    list ->dados[list->length] = valor;
    list->length++;
    return 1; //Inserção bem-sucedida
}
