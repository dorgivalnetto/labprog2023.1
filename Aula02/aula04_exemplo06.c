#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
};

int main(){
    //inicializando uma estrutura
    struct pessoa p1;
    strcpy(p1.nome,"Dorgival");
    strcpy(p1.rua,"Av. Tenente Raimundo Rocha");
    p1.idade = 34;
    p1.numero = 05;

    /*Podemos definir uma lista de valores para colocar na
    estrutura, assim como, nos arrays. Desde que sejam na mesma
    ordem que foram definidos na estrutura.
    */
    struct pessoa p = {"Dorgival", "Av. Tenente Raimundo Rocha", 34, 05};


    /* Campos não definidos são inicializados com zero
    ou com uma string vazia ""
    */
    struct pessoa p = {"Dorgival", "Av. Tenente Raimundo Rocha", 34};

    system("pause");
    return 0;
}




