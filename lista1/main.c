#include <stdio.h>
#include <time.h>
#define SIZE 5

struct Alunos {
    char respostas[5];
    float nota;
};

float acertou(char c, int q);

char respondeu(int n);

/*

Gabarito

1 - A
2 - C
3 - C
4 - B
5 - E

*/

int main() {

    struct Alunos aluno[SIZE];

    int i,j;

    srand(time(NULL));

    for(i = 0; i < SIZE; i++){
        for(j = 0; j < 5; j++){
           aluno[i].respostas[j] = respondeu((rand() % 5) + 1);
        }
    }

    for(i = 0; i < SIZE; i++){
        aluno[i].nota = 0;
        for(j = 0; j < 5; j++){
            aluno[i].nota += acertou(aluno[i].respostas[j], (j+1));
            printf("%.2f\n", aluno[i].nota);
        }
        printf("\n");
    }

    printf("\n");

    for(i = 0; i < SIZE; i++){
        printf("Aluno %d nota: %.2f\n", i+1, aluno[i].nota);
    }

    return 0;
}

char respondeu(int n) {

    switch(n) {
    case 1:
        return 'A';
        break;
    case 2:
        return 'B';
        break;
    case 3:
        return 'C';
        break;
    case 4:
        return 'D';
        break;
    case 5:
        return 'E';
        break;
    }
}

float acertou(char c, int q) {
    switch(c) {
    case 'A':
        if(q == 1)
            return 2.0;
        break;
    case 'B':
        if(q == 4)
            return 2.0;
        break;
    case 'C':
        if(q == 2 || q == 3)
            return 2.0;
        break;
    case 'D':
        if(q == 6)
            return 2.0;
        break;
    case 'E':
        if(q == 5)
            return 2.0;
        break;
    }
}
