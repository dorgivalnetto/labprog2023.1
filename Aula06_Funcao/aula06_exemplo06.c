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
    a função é encerrada imediatamente
    */

}


//Imprime os n números
void imprime(int n){
    int i;
    for(i=1; i<=n; i++)
        printf("Linha %d\n", i);
}




/*Um "array" só pode ser retornado se ele estiver
dentro de uma struct
*/



int main(){

    /*Para chamar uma função que não seja do tipo
    void, basta atribuir a chamada da função a uma
    variável
    */
    int x = soma(4,5);
    printf("x = %d\n", x);
    printf("soma = %d\n", soma(2,3));


    //Função do tipo void, não tem retorno
    imprime(3);

    system("pause");
    return 0;
}

