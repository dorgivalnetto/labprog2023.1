#include <stdio.h>
#include <stdlib.h>

//definindo uma enumera��o
enum semana{Domingo, Segunda, Ter�a, Quarta,
Quinta, Sexta, Sabado};

int main(){
    /*Uma enumera��o pode ser vista como uma lista de
    constantes, onde cada constante possui um nome
    significativo
    */

    //declara��o de uma vari�vel enum
    enum semana s;

    //atribuindo um valor a vari�vel
    s = Segunda; //1
    printf("Valor = %d\n", s);

    system("pause");
    return 0;
}
