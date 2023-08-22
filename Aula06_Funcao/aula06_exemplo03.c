#include <stdio.h>
#include <stdlib.h>
//Protótipos das funções
float raiz(float r);
int soma(int x, int y);

int main(){
    /* Parâmetros da função: permitem ao programador passar
    uma informação de um trecho de código para dentro da
    função */
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

    /*Funções sem parâmetros: basta deixar a lista vazia
    ou colocar a palavra void no lugar
    */
    float leitura();
    int le_arquivo(void);

    //Qual a diferença entre eles?


    /* Se você declarou dessa forma float leitura() o compilador
    simplesmente ignora qualquer parâmetro que você passar.
    */

    //O que acontece aqui?
    float y;
    y = leitura();
    y = leitura(5);
    y = leitura(5, 'a');

    //Ignora tudo que está dentro dos parênteses

    //O que acontece aqui?
    int x;
    x = le_arquivo();
    x = le_arquivo(5);//ERRO

    //O programa entende que não é para passar NADA para a função

    system("pause");
    return 0;
}


