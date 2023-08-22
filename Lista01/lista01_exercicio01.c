
#include <stdio.h>
#include <time.h>
#define TAM 10


int main(void) {
    int i;
    float vet[TAM];
    /* A fun��o srand() planta uma nova semente de n�meros aleat�rios,
       baseada no momento da execu��o do c�digo, obtido pela fun��o
       time()
    */
    srand(time(NULL));




    /*1 - Fa�a um programa que solicite ao usu�rio que informe
    as notas de 10 alunos de uma turma e, armazene em um vetor
    e imprima esse vetor*/

    //Leitura de dados do teclado
    for(i=0; i<TAM; i++){
        scanf("%f", &vet[i]);
    }

    //Impress�o do vetor
    for(i=0; i<TAM; i++){
        printf("%.1f ", vet[i]);
    }





    /*
    2 - Fa�a um programa que preencha um vetor com valores
    sequenciais e depois com valores aleat�rios.
    */
    printf("\n");
    printf("\n Valores sequenciais \n");
    for(i=0; i<TAM; i++){
        vet[i] = i+1;
    }

    for(i=0; i<TAM; i++){
        printf("%.1f ", vet[i]);
    }

    printf("\n Valores aleat�rios\n");
    for(i=0; i<TAM; i++){
        //vet[i] = rand();
        vet[i] = rand()%10;
    }

    for(i=0; i<TAM; i++){
        printf("%.1f ", vet[i]);
    }





    /* 3 - Fa�a um programa que mostre um vetor de tr�s
    para frente */
    printf("\n");
    printf("\n Vetor na ordem que foi criado \n");
    for(i=0; i<TAM; i++){
        printf("%.1f ", vet[i]);
    }

    printf("\n Vetor na ordem invertida \n");
    for(i=TAM-1;i>=0;i--) {
        printf("%.1f ",vet[i]);
    }





    /* 4 - Calcular a soma dos elementos do vetor
    */
    printf("\n");

    float soma=0;
    for(i=0;i<TAM;i++) {
        soma = soma + vet[i];
    }
    printf("\nSoma: %.1f", soma);






    /* 5 - Calcular a m�dia dos valores do vetor
    */
    printf("\n");
    printf("\nMedia: %.1f", soma/TAM);





    //6 - Obter o maior e o menor valor do vetor
    printf("\n");
    float maior, menor;
    maior = menor = vet[0];
    for (i = 0; i < TAM; i++) {
        if (maior < vet[i]) {
            maior = vet[i];
        }
        if (menor > vet[i]) {
            menor = vet[i];
        }
    }
    printf("\nMaior: %.1f | Menor: %.1f", maior, menor);





    //7 - Contar quantas vezes um determinado valor aparece no vetor
    float num;
    int cont=0;

    printf("\nContar as repeticoes do n�mero: ");
    scanf("%f", &num);

    for (i = 0; i < TAM; i++) {
        if (vet[i] == num) {
            cont++;
        }
    }
    printf("Ocorrencia de %.1f: %i vezes", num, cont);


    return 0;
}
