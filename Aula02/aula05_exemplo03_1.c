#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h"

int main(){
    float d;
    Ponto *p, *q;

    p = ponto_cria(10, 21);
    q = ponto_cria(7, 25);

    d = ponto_distancia(p,q);
    printf("Distância entre pontos: %f\n", d);

    ponto_libera(q);
    ponto_libera(p);

    system("pause");
    return 0;
}
