#include <stdio.h>
#include <stdlib.h>

//Definindo uma estrutura
    struct pessoa{
        //campos da estrutura
        char nome[50], rua[50];
        int idade, numero;
    };
//Por que a struct foi definida fora do main?

int main(){
    //declara��o de vari�veis
    char nome[50], rua[50];
    int idade, numero;

    //declara��o de uma vari�vel struct
    struct pessoa p;



    /*Cada campo (vari�vel) da struct pode ser
    acessada usando o operador . (ponto)
    */
    struct pessoa p;
    p.idade = 34; //comando de atribui��o
    scanf("%d", &p.numero); //comando de leitura
    gets(p.nome); //comando de leitura
    p.numero = p.numero + p.idade - 100; //express�o

    system("pause");
    return 0;
}


