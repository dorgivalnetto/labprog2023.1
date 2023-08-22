#include <stdio.h>
#include <stdlib.h>

/*A linguagem C permite dois tipos de passagem de
parâmetros para uma função.

    Por valor: cópia do dado (padrão) é feita e
    passada para a função.

    É o modo padrão para os tipos básicos pré-definidos
    int, char, float, double e tipos definidos pelo
    programador (struct)

*/

void soma_mais_um(int n){ //n = x
    n = n+1;
    print("Dentro da funcao: x = %d\n", n);
}


int main(){
    //Exemplo de passagem por valor
    int x = 5;
    printf("Antes da funcao: x = %d\n", x);
    soma_mais_um(x);
    printf("Depois da funcao: x = %d\n", x);

    system("pause");
    return 0;
}



/*Passagem por referência: o endereço de onde o dado está
armazendo na memória é passado para a função. Assim,
a função pode modificar o valor do parâmetro.

Parâmetro por referência usa-se o operador * na frente do
nome do parâmetro durante a declaração da função.

Toda vez que a variável for usada, o operador * deverá ser
usado na frente do nome da variável

Na chamada da função é necessário utilizar o operador & na
frente do nome da variável que será passada por referência
*/
void soma_mais_um(int *n){
    *n = *n + 1;
    printf("Dentro da funcao: x = %d\n", *n);
}

int main(){
    int x = 7;
    printf("Antes da funcao: x = %d\n", x);
    soma_mais_um(&x);
    printf("Depois da funcao: x = %d\n", x);

    system("pause");
    return 0;
}

