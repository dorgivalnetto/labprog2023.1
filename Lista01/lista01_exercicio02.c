#include <stdio.h>
/* Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
elementos. Escreva ao final a matriz obtida*/
int main(){
    int matriz[5][5];

     //PREENCHIMENTO DA MATRIZ
    for(int linha = 0 ; linha < 5; linha++){
        for(int coluna = 0 ; coluna < 5; coluna++){
            if(linha == coluna){
                matriz[linha][coluna] = 1 ; //Diagonal principal
            }
            else{
                matriz[linha][coluna] = 0;
            }
        }
     }


    //PRINT DA MATRIZ
    for(int linha = 0 ; linha < 5; linha++){
        for(int coluna = 0 ; coluna < 5; coluna++){
            printf("[ %d ] ", matriz[linha][coluna]);
        }
        printf("\n");
    }



/* Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	int matrix[4][4];
    int i, j;

	printf("\n");
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            printf("Valor [linha %d][coluna %d]: ", (i+1), (j+1));
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    int maior = matrix[0][0]; // Assim garanto que mesmo numeros negativos possam ser o maior
    int posI = 1;
    int posJ = 1;

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
                if (matrix[i][j] > maior) {
                        maior = matrix[i][j];
                        posI = i+1;
                        posJ = j+1;
				}
        }
    }

    printf("O maior numero da matriz é: %d [linha %d][coluna %d].\n", maior, posI, posJ);
}



    return 0;
}
