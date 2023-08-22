#include <stdio.h>
#include <stdlib.h>
#define N 100
int main(){
    /* O tamanho de um array deve ser sempre um valor ou
    expressão inteira e constante
    */

    int n = 5;
    float F[N+1]; //Correto
    char texto[30]; //Correto
    int Vetor[n]; //Incorreto
    int V[4.5]; //Incorreto
    system("pause");
    return 0;
}
