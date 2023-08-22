#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco{
    char rua[50];
    int numero;
};

struct pessoa{
    char nome[50];
    int idade;
    struct endereco ender;
};

int main(){
    struct pessoa p;
    p.idade = 34;
    p.ender.numero = 05;

    //lendo uma estrutura aninhada do teclado
    struct pessoa p1;
    gets(p1.nome);
    scanf("%d", &p1.idade);
    gets(p.ender.rua);
    scanf("%d", &p1.ender.numero);

    system("pause");
    return 0;

}
