#include <stdio.h>
#inclue <stdlib.h>

struct ponto{
    int x, y;
};

/*um par�metro por refer�ncia que seja do mesmo tipo dos
campos da estrutura */
void soma_imprime_valor(int *n){
    *n = *n + 1;
    printf("Valor = %d\n", *n);
}

int main(){
    //Passando um campo "por refer�ncia"
    struct ponto p1 = {10, 20};

    /*como queremos exibir um campo, colocamos o & na frente
    O campos x da estrutura p1 tem aquele endere�o */
    soma_imprime_valor(&p1.x);
    soma_imprime_valor(&p1.y);

    system("pause");
    return 0;
}

