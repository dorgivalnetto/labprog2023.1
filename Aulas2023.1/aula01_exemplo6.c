#include <stdio.h>
#include <stdlib.h>
int main(){
 //Cada posi��o do array � uma vari�vel
 float notas[100], vetor[100];
 scanf("%d", &notas[5]); //comando de leitura
 notas[0] = 10; //comando de atribui��o
 notas[1] = notas[5] + notas[0]; //express�o
 notas = vetor; //Errado

 //O que acontece aqui?
 int vet[6] = {0};

 //E aqui?
 int vet[6] = {10};

 system("pause");
 return 0;
}

