#include <stdio.h>
#include <stdlib.h>
int main(){
 //Cada posição do array é uma variável
 float notas[100], vetor[100];
 scanf("%d", &notas[5]); //comando de leitura
 notas[0] = 10; //comando de atribuição
 notas[1] = notas[5] + notas[0]; //expressão
 notas = vetor; //Errado

 //O que acontece aqui?
 int vet[6] = {0};

 //E aqui?
 int vet[6] = {10};

 system("pause");
 return 0;
}

