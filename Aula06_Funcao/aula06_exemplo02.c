#include <stdio.h>
#include <stdlib.h>
//prot�tipo da fun��o:
int quadrado(int a); //prot�tipo, assim como a fun��o
int quadrado(int); //prot�tipo apenas o tipo

int main(){
    /*Onde declarar a fun��o?
    Se for depois do main(), � neces�rio
    definir o seu prot�tipo
    */
    int x,y;
    printf("Digite x: ");
    scanf("%d", &x);
    y = quadrado(x);
    printf("y = %d\n", y);

    system("pause");
    return 0;
}

//Exemplo de fun��o:
int quadrado(int a){
    return a * a;
}
