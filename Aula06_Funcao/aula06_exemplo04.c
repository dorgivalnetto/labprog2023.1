#include <stdio.h>
#include <stdlib.h>
/*Corpo da função: processa as entradas (parâmetros) e gera a saída
(return) da função. É formada por declarações e comandos
*/

//Exemplo: Cálculo do fatorial
int fatorial(int n){
    /*As operações de cálculo devem ficar na função para permitir
    a reutilização da função de outras formas*/
    int i, f = 1;
    for(i = 1; i<n; i++){
        f = f*i;
    }
    return f;
}

int main(){

    //Operações de Leitura e Escrita fica na função main()
    int x, y;
    printf("Digite um número: ");
    scanf("%d", &x);

    y = fatorial(x);

    printf("Fatorial de n = %d\n", y);

    int y = fatorial(7);
    printf("7! = %d\n ", y);
    printf("5! = %d\n ", fatorial(5));

    system("pause");
    return 0;
}

