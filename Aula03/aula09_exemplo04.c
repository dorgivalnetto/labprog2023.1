#include <stdio.h>
#inclue <stdlib.h>

struct ponto{
    int x, y;
};

//estamos passando uma struct ponto, por referência, para a função
void atribui(struct ponto *p){

    /*modificar o valor da estrutura.
    O parênteses é obrigatório para evitar que o compilador
    "se atrapalhe" *p.y achando que o y é passado por referência.
    Ao invés do p passado por referência. O parênteses garante que
    o (*p) foi passado por referência.
    */
    (*p).x = 10;
    (*p).y = 20;
}


void atribui(struct ponto *p){
    /*Operador seta pode ser utilizado para acessar um campo
    de uma estrutura passada por referência */
    p->x = 10;
    p->y = 20;
}

int main(){
    //Passando uma struct "por referência"
    struct ponto p1;

    atribui(&p1);
    printf("x = %d\n", p1.x);
    printf("x = %d\n", p1.y);

    system("pause");
    return 0;
}


