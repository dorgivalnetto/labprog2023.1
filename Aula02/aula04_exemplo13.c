#include <stdio.h>
#include <stdlib.h>

struct cadastro{
    char nome[50], rua[50];
    int idade, numero;
};

//vamos definir um apelido para struct cadastro
typedef struct cadastro cad;

int main(){
    //struct cadastro e cad são o mesmo tipo
    struct cadastro c1;
    cad c2;

    system("pause");
    return 0;
}


