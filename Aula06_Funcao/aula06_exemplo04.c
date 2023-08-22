#include <stdio.h>
#include <stdlib.h>
/*Corpo da fun��o: processa as entradas (par�metros) e gera a sa�da
(return) da fun��o. � formada por declara��es e comandos
*/

//Exemplo: C�lculo do fatorial
int fatorial(int n){
    /*As opera��es de c�lculo devem ficar na fun��o para permitir
    a reutiliza��o da fun��o de outras formas*/
    int i, f = 1;
    for(i = 1; i<n; i++){
        f = f*i;
    }
    return f;
}

int main(){

    //Opera��es de Leitura e Escrita fica na fun��o main()
    int x, y;
    printf("Digite um n�mero: ");
    scanf("%d", &x);

    y = fatorial(x);

    printf("Fatorial de n = %d\n", y);

    int y = fatorial(7);
    printf("7! = %d\n ", y);
    printf("5! = %d\n ", fatorial(5));

    system("pause");
    return 0;
}

