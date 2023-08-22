#include <stdio.h>
#include <stdlib.h>

union tipo{
    short int x;
    unsigned char c[2];
};

int main(){
    /*Por que usar uma union?
        Economia de memória: se seus campos nunca são usados
        ao mesmo tempo, não faz sentido reservar espaço para
        os dois.  */
        union tipo v;

        //1ª parte do programa
        v.x = 1545;
        printf("x = %d\n", v.x);

        //2ª parte do programa
        v.c[0] = 'a';
        v.c[1] = 'b';
        printf("c[0] = %c\n", v.c[0]);
        printf("c[1] = %c\n", v.c[1]);
}

