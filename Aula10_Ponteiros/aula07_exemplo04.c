#include <stdio.h>
#include <stdlib.h>

/*Ponteiro gen�rico: pode apontar para todos os tipos de dados
existentes ou que ainda ser�o criados.

Permite que voc� manipule dados de forma gen�rica sem se
preocupar com o tipo espec�fico dos dados. Isso oferece
uma flexibilidade significativa, mas tamb�m requer cuidado,
pois os tipos n�o s�o verificados em tempo de compila��o.

S�o frequentemente usados na aloca��o din�mica de mem�ria
usando fun��es como malloc, calloc e realloc. Essas fun��es
retornam um ponteiro gen�rico (void *) que pode ser convertido
no tipo apropriado.

void *nome_ponteiro;
*/

int main(){
    void *pp;
    int *p1, p2 = 10;

    p1 = &p2;
    pp = &p2;//Endere�o de int
    printf("Endereco em pp: %p \n", pp);

    //O ponteiro gen�rico recebe o endere�o de um ponteiro
    pp = &p1;//Endere�o de int*
    printf("Endereco em pp: %p \n", pp);

    pp = p1;//Endere�o de int
    printf("Endereco em pp: %p \n", pp);




    /*Antes de acessar o conte�do � preciso converter o ponteiro
     gen�rico para o tipo de ponteiro com o qual se deseja trabalhar
    */
    pp = &p2; //Endere�o de int
    printf("Conte�do: %d \n", *pp); //Erro

    /*O ponteiro gen�rico ser� convertido para um ponteiro
     para inteiro (int*)*/
    printf("Conte�do: %d \n", (int*)pp); //573969812




    /*As opera��es aritm�ticas, utilizando ponteiros gen�ticos
    s�o sempre realizadas com base em uma unidade de mem�ria (1 byte)
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
