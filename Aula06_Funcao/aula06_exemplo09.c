#include <stdio.h>
#include <stdlib.h>
/*Quando trabalhamos com estrutuas podemos passar
para a função:
    - um campo
    - toda estrutura:
        - por valor
        - por referência
*/

struct ponto{
    int x,y;
};

void imprime_valor(int n){
    printf("Valor = %d\n", n);
}

int main(){
    //Passando um campo por valor
    struct ponto p1 = {10,20};
    imprime_valor(p1.x);
    imprime_valor(p1.y);

    system("pause");
    return 0;
}



//Passando um campo por referencia
struct ponto{
    int x,y;
};

void soma_imprime_valor(int *n){
    *n = *n + 1;
    printf("Valor = %d\n", *n);
}

int main(){
    //Passando um campo por valor
    struct ponto p1 = {10,20};
    soma_imprime_valor(&p1.x);
    soma_imprime_valor(&p1.y);

    system("pause");
    return 0;
}



//Passando uma struct por referencia
struct ponto{
    int x,y;
};

void atribui(struct ponto *p){
    /*Ao acessar uma estrutura passada por referência não
    podemos esquecer de colocar os parênteses antes de acessar
    o seu campo
    */
    (*p).x = 10;
    (*p).y = 20;


    /*Podemos ainda usar o operador -> para acessar um campo de
    uma estrutura passada por referência
    */
    p->x = 10;
    p->y = 20;
}

int main(){
    //Passando um campo por valor
    struct ponto p1;
    atribui(&p1);
    printf("x = %d\n", p1.x);
    printf("y = %d\n", p1.y);

    system("pause");
    return 0;
}
