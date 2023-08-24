#include <stdio.h>
#include <stdlib.h>

/*Ponteiro genérico: pode apontar para todos os tipos de dados
existentes ou que ainda serão criados.

Permite que você manipule dados de forma genérica sem se
preocupar com o tipo específico dos dados. Isso oferece
uma flexibilidade significativa, mas também requer cuidado,
pois os tipos não são verificados em tempo de compilação.

São frequentemente usados na alocação dinâmica de memória
usando funções como malloc, calloc e realloc. Essas funções
retornam um ponteiro genérico (void *) que pode ser convertido
no tipo apropriado.

void *nome_ponteiro;
*/

int main(){
    void *pp;
    int *p1, p2 = 10;

    p1 = &p2;
    pp = &p2;//Endereço de int
    printf("Endereco em pp: %p \n", pp);

    //O ponteiro genérico recebe o endereço de um ponteiro
    pp = &p1;//Endereço de int*
    printf("Endereco em pp: %p \n", pp);

    pp = p1;//Endereço de int
    printf("Endereco em pp: %p \n", pp);




    /*Antes de acessar o conteúdo é preciso converter o ponteiro
     genérico para o tipo de ponteiro com o qual se deseja trabalhar
    */
    pp = &p2; //Endereço de int
    printf("Conteúdo: %d \n", *pp); //Erro

    /*O ponteiro genérico será convertido para um ponteiro
     para inteiro (int*)*/
    printf("Conteúdo: %d \n", (int*)pp); //573969812




    /*As operações aritméticas, utilizando ponteiros genéticos
    são sempre realizadas com base em uma unidade de memória (1 byte)
    */
    void *p = 0x5DC; //1500
    printf("p = %d \n", p);
    p++;

    printf("p = %d \n", p);//1501
    p = p+15;

    printf("p = %d \n", p);//1516
    p = p-2;

    printf("p = %d \n", p);//1514


    system("pause");
    return 0;
}
