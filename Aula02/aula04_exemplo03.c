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
    //declaração de variáveis
    char nome[50], rua[50];
    int idade, numero;

    //declaração de uma variável struct
    struct pessoa p;



    /*Cada campo (variável) da struct pode ser
    acessada usando o operador . (ponto)
    */
    struct pessoa p;
    p.idade = 34; //comando de atribuição
    scanf("%d", &p.numero); //comando de leitura
    gets(p.nome); //comando de leitura
    p.numero = p.numero + p.idade - 100; //expressão

    system("pause");
    return 0;
}


