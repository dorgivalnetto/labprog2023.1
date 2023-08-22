#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Definindo uma estrutura
struct pessoa{
    //campos da estrutura
    char nome[50], rua[50];
    int idade, numero;
};

int main(){
    //Uma estrutura pode agrupar variáveis de tipos diferentes
    struct pessoa p;
    p.idade = 34;
    p.numero = 05;


    /*Uma estrutura também é um tipo de dado. Logo, uma
    estrutur pode possuir uma variável do tipo de outra
    estrutura previamente definida. Chamamos esse conceito de
    Estruturas Aninhadas.
    */
    struct nome_struct1{
        ...
    };

    struct nome_struct2{
        ...
        struct nome_struct1 nome;
    };


    system("pause");
    return 0;
}
