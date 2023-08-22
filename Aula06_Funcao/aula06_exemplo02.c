#include <stdio.h>
#include <stdlib.h>
//protótipo da função:
int quadrado(int a); //protótipo, assim como a função
int quadrado(int); //protótipo apenas o tipo

int main(){
    /*Onde declarar a função?
    Se for depois do main(), é necesário
    definir o seu protótipo
    */
    int x,y;
    printf("Digite x: ");
    scanf("%d", &x);
    y = quadrado(x);
    printf("y = %d\n", y);

    system("pause");
    return 0;
}

//Exemplo de função:
int quadrado(int a){
    return a * a;
}
