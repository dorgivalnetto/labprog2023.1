#include <stdio.h>
#include <stdlib.h>

union tipo{
    short int x;
    unsigned char c[2];
};

int main(){
    /*Por que usar uma union?
        Economia de mem�ria: se seus campos nunca s�o usados
        ao mesmo tempo, n�o faz sentido reservar espa�o para
        os dois.  */
        union tipo v;

        //1� parte do programa
        v.x = 1545;
        printf("x = %d\n", v.x);

        //2� parte do programa
        v.c[0] = 'a';
        v.c[1] = 'b';
        printf("c[0] = %c\n", v.c[0]);
        printf("c[1] = %c\n", v.c[1]);
}

