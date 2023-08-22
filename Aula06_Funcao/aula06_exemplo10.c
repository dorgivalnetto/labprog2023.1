#include <stdio.h>
#include <stdlib.h>
/*Recurs�o: dividir um problema maior em problemas menores,
solucionar os problemas menores e combinar as solu��es*/
void imprime(int n){
    int i;
    for(i=1; i<=n; i++)
        printf("Linha %d \n", i);
}

int main(){
    imprime(5);
    printf("Fim do programa!\n");

    system("pause");
    return 0;
}


/*Uma fun��o pode chamar a si pr�pria. A isso
chamamos de recursividade
*/
int fatorial(int n){
    if(n == 0 || n == 1)
       return 1;
    else
        return n*fatorial(n-1);
}

int main(){
    int x = fatorial(5);

    system("pause");
    return 0;
}
