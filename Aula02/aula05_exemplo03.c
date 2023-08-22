#include <stdio.h>
#include <stdlib.h>

//inclui os protótipos
#include "aula05_exemplo03.h"

int main(){
    /*Exemplo de TAD: um ponto definido por
    suas coordenadas X e Y */

    struct ponto{
        float x;
        float y;
    };

    /*1º passo: definir o arquivo .h
        - Protótipos das funções
        - Tipos de ponteiro
        - Dados globalmente acessível
    */


//Aloca e retorna um ponto com coordenadas X e Y
Ponto* ponto_cria(float x, float y){
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if(p != NULL){
        p->x = x;
        p->y = y;
    }
    return p;
}

//Libera a memória alocada para um ponto
void ponto_liberar(Ponto* p){
    free(p);
}

//Recupera, por referência, o valor de um ponto
void ponto_acessa(Ponto* p, float* x, float* y){
    *x = p -> x;
    *y = p -> y;
}


//Atribui a um ponto as coordenadas x e y
void ponto_acessa(Ponto* p, float x, float y){
    p -> x = x;
    p -> y = x;
}


//Calcula a distância entre dois pontos
float ponto_distancia(Ponto* p1, Ponto* p2){
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx * dx + dy * dy);
}


    system("pause");
    return 0;
}
