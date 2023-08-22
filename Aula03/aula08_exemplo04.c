#include <stdio.h>
#include <stdlib.h>

//definindo uma enumeração
enum escapes{ retrocesso = '\b', tabulacao='\t',
novalinha='\n'};

int main(){
    /*Pode-se atribuir valores da tabela ASCII
    para a enumeração    */
    enum escaes e = novalinha;
    printf("Teste %c de %c escrita\n", e,e); // \n

    e = tabulacao;
    printf("Teste %c de %c escrita\n", e,e); // \t

    system("pause");
    return 0;
}


