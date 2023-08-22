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
    /*Voltamos ao problema do cadastro de pessoa.
    Vimos que o uso de estruturas facilita muito
    a vida do programador na manipulação dos dados
    do programa. Imagine ter que declarar quatro cadastros,
    para quatro pessoas diferentes   */

    char nome1[50], nome2[50], nome3[50], nome4[50];
    char rua1[50], rua2[50], rua3[50], rua4[50];
    int idade1, idade2, idade3, idade4;
    int numero1, numero2, numero3, numero4;


    //declaração de uma variável struct
    struct pessoa p1, p2, p3, p4;

    /*A struct é um tipo de dado e, portanto, a linguagem
    C suporta a declaração de uma array de estrutura*/
    struct pessoa p[4];

    p[0].idade = 34;
    strcpy(p[1].nome, "Dorgival");

    p[2].numero =p[0].numero-1;


    /*A combinação de arrays e estruturas permite que se
    manipule de forma muito mais prática várias variáveis de
    estrutura*/
    struct pessoa p[4];
    int i;

    //ler os valores a partir da entrada do usuário
    for(i = 0; i<4; i++){
        gets(p[i].nome);
        scanf("%d", &p[i].idade);
        gets(p[i].rua);
        scanf("%d", &p[i].numero);
    }

    system("pause");
    return 0;
}



