#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
};

int main(){
    //Atribuição entre estruturas
    struct pessoa p1 = {"Dorgival", "Av. Tenente Raimundo Rocha", 34, 05};
    struct pessoa p2;

    strcpy(p2.nome, p1.nome);
    strcpy(p2.rua, p1.rua);
    p2.idade = p1.idade;
    p2.numero = p1.numero;

    /*Estruturas suportam atribuição, desde que sejam do
    mesmo tipo */
    p2 = p1;

    system("pause");
    return 0;
}





