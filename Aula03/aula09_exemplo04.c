#include <stdio.h>
#inclue <stdlib.h>

struct ponto{
    int x, y;
};

//estamos passando uma struct ponto, por refer�ncia, para a fun��o
void atribui(struct ponto *p){

    /*modificar o valor da estrutura.
    O par�nteses � obrigat�rio para evitar que o compilador
    "se atrapalhe" *p.y achando que o y � passado por refer�ncia.
    Ao inv�s do p passado por refer�ncia. O par�nteses garante que
    o (*p) foi passado por refer�ncia.
    */
    (*p).x = 10;
    (*p).y = 20;
}


void atribui(struct ponto *p){
    /*Operador seta pode ser utilizado para acessar um campo
    de uma estrutura passada por refer�ncia */
    p->x = 10;
    p->y = 20;
}

int main(){
    //Passando uma struct "por refer�ncia"
    struct ponto p1;

    atribui(&p1);
    printf("x = %d\n", p1.x);
    printf("x = %d\n", p1.y);

    system("pause");
    return 0;
}


