/*Calculadora Simples Crie uma calculadora simples
 em C com fun��es para realizar as opera��es de
 adi��o, subtra��o, multiplica��o e divis�o.*/

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b != 0) {
        return (float) a / b;
    } else {
        printf("Erro: Divis�o por zero!\n");
        return 0;
    }
}

int main() {
    int num1, num2;
    printf("Digite dois n�meros: ");
    scanf("%d %d", &num1, &num2);

    printf("Soma: %d\n", add(num1, num2));
    printf("Subtra��o: %d\n", subtract(num1, num2));
    printf("Multiplica��o: %d\n", multiply(num1, num2));
    printf("Divis�o: %.2f\n", divide(num1, num2));

    return 0;
