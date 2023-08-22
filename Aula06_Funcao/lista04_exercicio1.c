/*Calculadora Simples Crie uma calculadora simples
 em C com funções para realizar as operações de
 adição, subtração, multiplicação e divisão.*/

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
        printf("Erro: Divisão por zero!\n");
        return 0;
    }
}

int main() {
    int num1, num2;
    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);

    printf("Soma: %d\n", add(num1, num2));
    printf("Subtração: %d\n", subtract(num1, num2));
    printf("Multiplicação: %d\n", multiply(num1, num2));
    printf("Divisão: %.2f\n", divide(num1, num2));

    return 0;
