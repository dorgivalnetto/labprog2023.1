#include <stdio.h>
#include <stdlib.h>

//definindo uma uni�o
union tipo{
    short int x; //inteiro com 16 bits
    unsigned char c; //caractere de 8 bits sem sinal
};

int main(){
    //declara��o de uma vari�vel union
    union tipo u;

    /*Cada campo (vari�vel) da union pode ser acessado
    usando  operador de "." */
    u.x = 5;
    u.c = 'a';

    system("pause");
    return 0;
}
