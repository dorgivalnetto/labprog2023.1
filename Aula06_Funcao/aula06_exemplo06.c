#include <stdio.h>
#include <stdlib.h>
/*O tipo de retorno pode ser um
    int, char, float, double
    void
    struct
    ponteiros
*/
int soma(int x, int y){
    return x+y;
    printf("x + y = %d\n", x+y);

    /*
    Quando se chega a um comando return,
    a fun��o � encerrada imediatamente
    */

}


//Imprime os n n�meros
void imprime(int n){
    int i;
    for(i=1; i<=n; i++)
        printf("Linha %d\n", i);
}




/*Um "array" s� pode ser retornado se ele estiver
dentro de uma struct
*/



int main(){

    /*Para chamar uma fun��o que n�o seja do tipo
    void, basta atribuir a chamada da fun��o a uma
    vari�vel
    */
    int x = soma(4,5);
    printf("x = %d\n", x);
    printf("soma = %d\n", soma(2,3));


    //Fun��o do tipo void, n�o tem retorno
    imprime(3);

    system("pause");
    return 0;
}

