#include <stdio.h>
#include <stdlib.h>

//definindo uma união
union tipo{
    short int x; //inteiro com 16 bits
    unsigned char c; //caractere de 8 bits sem sinal
};

int main(){
    //declaração de uma variável union
    union tipo u;

    /*Cada campo (variável) da union pode ser acessado
    usando  operador de "." */
    u.x = 5;
    u.c = 'a';

    system("pause");
    return 0;
}
