#include <stdio.h>
#include <stdlib.h>
/*Exemplo de fun��o: repete um menu de op��es enquanto
a op��o n�o for v�lida*/
int menu(){
    int i;
    do{
        printf("Escolha uma op��o: \n");
        printf("(1) Opcao 1 \n");
        printf("(2) Opcao 2 \n");
        printf("(3) Opcao 3 \n");
        scanf("%d", &i);
    }while((i<1) || (i>3));
    return i;
}

int main(){

    int op = menu();
    printf("Voce escolheu a opcao %d\n", op);

    system("pause");
    return 0;
}

