#include <stdio.h>
#include <stdlib.h>

/*Arrays s�o sempre passados por refer�ncia para
uma fun��o.

Isso evita a c�pia desnecess�ria de grandes quantidades
de dados para outras �reas de mem�ria durante a chamada
da fun��o, o que afetaria o desempenho do programa

*/



//par�metro por refer�ncia, tamanho do vetor
void imprime(int *n, int m){
    int i;
    for(i=0; i<m; i++)
    //Na fun��o, continuamos usando colchete e �ndice
        printf("%d \n", n[i]);
}


int main(){
    int v[5] = {1,2,3,4,5};
    /*Na chamada da fun��o, usa-se apenas o nome do
    array (sem colchete e �ndice) e sem o operador
    &, pois o nome do vetor j� � o seu endere�o */
    imprime(v, 5);


    system("pause");
    return 0;
}


/*Arrays com mais de uma dimens�o precisam da informa��o
do tamanho das outras dimens�es
*/

//Deve-se informar, pelo menos, a quantidade de colunas
void imprime_matriz(int m[][2], int n){
    int i, j;
    for(i=0; i<n; i++)
        for(j=0; j<2; j++)
            printf("%d \n", m[i][j]);
}

int main(){
    int mat[3][2] = {{1,2}, {3,4}, {5,6}};
    imprime_matriz(mat,3);
}
