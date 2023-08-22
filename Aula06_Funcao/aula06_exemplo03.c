#include <stdio.h>
#include <stdlib.h>
//Prot�tipos das fun��es
float raiz(float r);
int soma(int x, int y);

int main(){
    /* Par�metros da fun��o: permitem ao programador passar
    uma informa��o de um trecho de c�digo para dentro da
    fun��o */
    float raiz(float r);
    int soma(int x, int y);
    float exponencia(float a, int b);

    float k, w = 5.4;
    k = raiz(w);
    k = raiz(5.4);
    k = raiz(); //ERRO
    k = raiz(w, 5.4); //ERRO

    int x,y = 1, z = 2;
    x = soma(y,z);
    x = soma(1,2);
    x = soma(y,2);

    /*Fun��es sem par�metros: basta deixar a lista vazia
    ou colocar a palavra void no lugar
    */
    float leitura();
    int le_arquivo(void);

    //Qual a diferen�a entre eles?


    /* Se voc� declarou dessa forma float leitura() o compilador
    simplesmente ignora qualquer par�metro que voc� passar.
    */

    //O que acontece aqui?
    float y;
    y = leitura();
    y = leitura(5);
    y = leitura(5, 'a');

    //Ignora tudo que est� dentro dos par�nteses

    //O que acontece aqui?
    int x;
    x = le_arquivo();
    x = le_arquivo(5);//ERRO

    //O programa entende que n�o � para passar NADA para a fun��o

    system("pause");
    return 0;
}


