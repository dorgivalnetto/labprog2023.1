#include <stdio.h>
#include <stdlib.h>
/*Ponteiro � um tipo especial de vari�vel que
armazenam endere�os de mem�ria

Forma geral: tipo_ponteiro *nome_ponteiro
*/
int main(){
    /*Ponteiros n�o inicializados apontam para um
    lugar indefinido
    */
    int *x;


    /*Um ponteiro pode ter um valor especial NULL*/
    int *p = NULL;


    /*Podemos apontar o ponteiro para uma vari�vel
    que j� exista no programa */
    int x = 10;
    int *p;

    //ponteiro p aponta para a vari�vel x
    p = &x;

    printf("x = %d\n", x);
    printf("&x = %p\n", &x);
    printf("Endere�o para onde o ponteiro aponta p = %p\n", p);

    /*Para acessar o valor da vari�vel apontada por
    um ponteiro, basta usar o operador asterisco *
    */
    printf("Valor da vari�vel apontada p = %d\n", *p);


    /*O operador * permite modificar o conte�do da posi��o
    de mem�ria apontada
    */
    *p = 12;
    printf("*p = %d\n", *p)

    system("pause");
    return 0;
}
