#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int year;
    printf("Digite um ano: ");
    scanf("%d", &year);
    if (isLeapYear(year)) {
        printf("%d � um ano bissexto.\n", year);
    } else {
        printf("%d n�o � um ano bissexto.\n", year);
    }
    return 0;
