/*
    Crie um vetor de inteiros chamado A com 10 posi��es,
    preencha o vetor recebendo dados atrav�s do teclado. E,
    multiplique o conte�do de cada elemento do vetor A por 10,
    armazenando o resultado da multiplica��o em outro vetor,
    chamado B.
*/

#include <stdio.h>
int main(){

    int A[10], B[10];
    int i;

    for(i = 0; i<10; i++){
        printf("Digite o %d valor para o vetor A: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nExibindo os valores do vetor A: \n");
    for(i = 0; i<10; i++){
        printf("A[%d] = %d \n", i, A[i]);
    }

    for(i = 0; i<10; i++){
        B[i] = A[i]*10;
    }

    printf("\nExibindo os valores do vetor B: \n");
    for(i = 0; i<10; i++){
        printf("B[%d] = %d \n", i, B[i]);
    }
}
