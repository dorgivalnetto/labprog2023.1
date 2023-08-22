#include <stdio.h>
#include <stdlib.h>

/*A linguagem C permite dois tipos de passagem de
par�metros para uma fun��o.

    Por valor: c�pia do dado (padr�o) � feita e
    passada para a fun��o.

    � o modo padr�o para os tipos b�sicos pr�-definidos
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



/*Passagem por refer�ncia: o endere�o de onde o dado est�
armazendo na mem�ria � passado para a fun��o. Assim,
a fun��o pode modificar o valor do par�metro.

Par�metro por refer�ncia usa-se o operador * na frente do
nome do par�metro durante a declara��o da fun��o.

Toda vez que a vari�vel for usada, o operador * dever� ser
usado na frente do nome da vari�vel

Na chamada da fun��o � necess�rio utilizar o operador & na
frente do nome da vari�vel que ser� passada por refer�ncia
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

