#include <stdio.h>
#include <stdlib.h>

/*A linguagem C permite criar ponteiros com diferentes n�veis
de apotamento: ponteiros que apontam para outros ponteiros.
*/

int main(){
    int x = 10;
    int *p = &x;

    //ponteiro, para ponteiro de inteiro
    int **p2 = &p;

    //Endere�o em p2
    printf("p2: %d\n", p2); //&p

    //Conte�do do endere�o
    printf("*p2: %d\n", *p2); //&x

    //Conte�do do endere�o do endere�o
    printf("**p2: %d\n", **p2); //x



    /*A quantidade de asteriscos * na declara��o do ponteiro que
    indica o n�mero de n�veis do ponteiro
    */
    //vari�vel int
    int x;

    //ponteiro para int(1 n�vel)
    int *p1;

    //ponteiro para ponteiro de int(2 n�veis)
    int **p2;

    //ponteiro para ponteiro para ponteiro de int(3 n�veis)
    int ***p1;

    system("pause");
    return 0;

}
