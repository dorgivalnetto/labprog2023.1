#include <stdio.h>
#include <stdlib.h>

//definindo uma enumeração
enum semana{Domingo, Segunda, Terça, Quarta,
Quinta, Sexta, Sabado};

int main(){
    /*Uma enumeração pode ser vista como uma lista de
    constantes, onde cada constante possui um nome
    significativo
    */

    //declaração de uma variável enum
    enum semana s;

    //atribuindo um valor a variável
    s = Segunda; //1
    printf("Valor = %d\n", s);

    system("pause");
    return 0;
}
