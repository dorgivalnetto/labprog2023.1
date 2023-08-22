#include <stdio.h>
#include <stdlib.h>

/*Arrays são sempre passados por referência para
uma função.

Isso evita a cópia desnecessária de grandes quantidades
de dados para outras áreas de memória durante a chamada
da função, o que afetaria o desempenho do programa

*/



//parâmetro por referência, tamanho do vetor
void imprime(int *n, int m){
    int i;
    for(i=0; i<m; i++)
    //Na função, continuamos usando colchete e índice
        printf("%d \n", n[i]);
}


int main(){
    int v[5] = {1,2,3,4,5};
    /*Na chamada da função, usa-se apenas o nome do
    array (sem colchete e índice) e sem o operador
    &, pois o nome do vetor já é o seu endereço */
    imprime(v, 5);


    system("pause");
    return 0;
}


/*Arrays com mais de uma dimensão precisam da informação
do tamanho das outras dimensões
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
