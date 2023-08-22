#include <stdio.h>
#include <stdlib.h>

//cria um apelido para int, que poderá ser chamado de inteiro
typedef int inteiro;

int main(){
    int x = 10;
    inteiro y  = 20;
    y = y + x;
    printf("Soma = %d\n", y);

    system("pause");
    return 0;
}

