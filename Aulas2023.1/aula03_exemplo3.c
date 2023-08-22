/
#include <stdio.h>
#include <stdlib.h>
int main(){
    //maior elemento de um array
    int i,lista[5] = {3, 18, 2, 51, 45};
    int maior = lista[0];

    for(i = 1; i<5; i++){
        if(maior < lista[i]){
            maior = lista[i];
        }
    }
    printf("Maior = %d\n", maior);

    system("pause");
    return 0;
}
