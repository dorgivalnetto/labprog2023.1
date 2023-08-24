#include <stdio.h>
#include <stdlib.h>

/*A linguagem C permite criar ponteiros com diferentes níveis
de apotamento: ponteiros que apontam para outros ponteiros.
*/

int main(){
    int x = 10;
    int *p = &x;

    //ponteiro, para ponteiro de inteiro
    int **p2 = &p;

    //Endereço em p2
    printf("p2: %d\n", p2); //&p

    //Conteúdo do endereço
    printf("*p2: %d\n", *p2); //&x

    //Conteúdo do endereço do endereço
    printf("**p2: %d\n", **p2); //x



    /*A quantidade de asteriscos * na declaração do ponteiro que
    indica o número de níveis do ponteiro
    */
    //variável int
    int x;

    //ponteiro para int(1 nível)
    int *p1;

    //ponteiro para ponteiro de int(2 níveis)
    int **p2;

    //ponteiro para ponteiro para ponteiro de int(3 níveis)
    int ***p1;

    system("pause");
    return 0;

}
