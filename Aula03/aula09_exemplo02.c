#include <stdio.h>
#inclue <stdlib.h>

struct ponto{
    int x, y;
};

void imprime_valor(int n){
    printf("Valor = %d\n", n);
}

int main(){
    //Passando um campo "por valor"
    struct ponto p1 = {10, 20};

    imprime_valor(p1.x);
    imprime_valor(p1.y);

    system("pause");
    return 0;
}
