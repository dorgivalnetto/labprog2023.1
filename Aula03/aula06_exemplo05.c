#include <stdio.h>
#include <stdlib.h>

union tipo{
    short int x;
    unsigned char c[2];
};

int main(){
    /*Por que usar uma union?
        Manipulação de bits: uma union permite fazer acessos
        controlados a nível de bits simplificado.

        Exemplo sem union:  */
        short int x = 1545; //que vai estar assim na memória 00000110 00001001

        /*Mas, iremos separar o valor X em dois caracteres.
        Separando ao meio, e dizer que a primeira parte
        é o C1 (00000110) e a segunda parte é o C0 (00001001)*/
        unsigned char c0, c1;

        /*Realizando operações bit a bit sobre o valor de X.
        Iremos zerar a primeira parte (00000000) e manter a segunda parte (00001001)*/
        c0 = 0x00FF & x; //00001001 -> 9

        /*Iremos fazer um deslocamento 8 bits a direita. Ou seja,
        Ocorrerá o deslocamento para a segunda parte (00000000 00000110).
        E, a primeira parte será completada com zeros e */
        c1 = x >> 8; //00000110 ->6

        //Com os valores separados é possível imprimir qualquer um deles.
        printf("x = %d\n", x);
        printf("c0 = %d\n", c0);
        printf("c1 = %d\n", c1);
}


