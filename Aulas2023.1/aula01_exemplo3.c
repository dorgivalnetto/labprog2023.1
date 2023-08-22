#include <stdio.h>
#include <stdlib.h>
int main(){
    /* Array - conunto de variáveis do mesmo tipo usando
    o mesmo nome. Forma geral: tipo nome_array[tamanho]

    Os dados armazenados em um vetor são chamados de itens do vetor.

    Vantagem de utilização do vetor

    Facilidade de manipular um grande conjunto de dados do
    mesmo tipo declarando-se apenas uma variável.

    A primeira posição de um vetor tem índice zero.
    A última posição de um vetor tem índice = número de posições – 1.


    ***Crie um array para armazenar as notas de 10 alunos
    */

    float notas[10];
    int i;

    for(i=1; i<=10; i++){
        printf("Digite a nota do %d aluno", i);
        scanf("%f", &notas[i]);
    }

    printf("Exibindo os valores do vetor\n");
    for(i=0; i<=9; i++){
        printf("%f\n", notas[i]);
    }

    float notas_novas[5] = {7, 8, 9.3, 8.7, 6.3};
    printf("notas_novas[0] = %.2f\n", notas[0]);
    printf("notas_novas[1] = %.2f\n", notas[1]);
    printf("notas_novas[4] = %.1f\n", notas[4]);

    system("pause");
    return 0;
}
