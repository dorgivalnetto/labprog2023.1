
#include <stdio.h>
#include <stdlib.h>
int main(){
    //declara array de int com 1 dimens�o
    int vet[5];
    //declara array de float com 2 dimens�es
    float mat[5][5];

    //declara array de double com 3 dimens�es
    double cub[5][5][5];
    int i, j, k;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            for(k=0; k<5; k++){
                cub[i][j][k] = 0;
            }
        }
    }

    //declara array de int com 4 dimens�es
    int x[5][5][5][5];
    system("pause");
    return 0;
}

