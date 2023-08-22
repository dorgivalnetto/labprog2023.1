#include <stdio.h>
#include <stdlib.h>

union tipoU{
    short int x; //inteiro com 16 bits
    unsigned char c; //caractere de 8 bits sem sinal
};

struct tipoS{
    short int x; //inteiro com 16 bits
    unsigned char c; //caractere de 8 bits sem sinal
};

int main(){
    /* STRUCT X UNION
    STRUCT:  alocar espa�o de mem�ria para armazenar
    todos os seus elementos*/
    struct tipoS v;
    v.x = 5;
    v.c = 'a'; //97 valor do a em decimal na tabela ASCII
    printf("x = %d\n",v.x);
    printf("c = %c\n",v.c);

    /*UNION: espa�o para armazenar APENAS o maior elemento.

    Se a mem�ria for compartilhada n�o consigo acessar os
    dois elementos ao mesmo tempo*/
    union tipoU v;
    v.x = 5;
    v.c = 'a'; //97
    printf("x = %d\n",v.x);
    printf("c = %c\n",v.c);

    /*Uni�o � �til quando o programa possuir v�rias vari�veis
    que n�o s�o utilizadas ao mesmo tempo.
    */

    system("pause");
    return 0;
}

