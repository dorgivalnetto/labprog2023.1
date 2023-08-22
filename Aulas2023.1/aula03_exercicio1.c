// Crie um programa que some os elementos de um array

#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, lista[5] = {1,2,3,4,5};
    int soma = 0;

    for(i=0; i<5; i++){
        soma = soma + lista[i];
    }
    printf("Soma = %d\n", soma);

    system("pause");
    return 0;
}


// Crie um programa que some os elementos de uma matriz

#include <stdio.h>
#include <stdlib.h>
int main(){
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i, j, soma = 0;

    for(i=0; i<3; i++){
        for(j=0; j< 3; j++){
            soma = soma + mat[i][j];
        }
    }
    printf("Soma = %d\n", soma);

    system("pause");
    return 0;
}

