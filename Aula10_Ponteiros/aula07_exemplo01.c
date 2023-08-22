#include <stdio.h>
#include <stdlib.h>
/*Ponteiro é um tipo especial de variável que
armazenam endereços de memória

Forma geral: tipo_ponteiro *nome_ponteiro
*/
int main(){
    /*Ponteiros não inicializados apontam para um
    lugar indefinido
    */
    int *x;


    /*Um ponteiro pode ter um valor especial NULL,
    que é o endereço de nenhum lugar
    */
    int *p = NULL;


    /*Podemos apontar o ponteiro para uma variável
    que já exista no programa
    */
    int x = 10;
    int *p;

    //ponteiro p aponta para a variável x
    p = &x;

    printf("x = %d\n", x);
    printf("&x = %p\n", &x);
    printf("Endereço para onde o ponteiro aponta p = %p\n", p);

    /*Para acessar o valor da variável apontada por
    um ponteiro, basta usar o operador asterisco *
    */
    printf("Valor da variável apontada p = %d\n", *p);

    system("pause");
    return 0;
}
