#include <stdio.h>
#include <stdlib.h>

int x = 3;

/*declara uma variável p que é do tipo ponteiro inteiro
que ainda não foi inicializado, mas ainda não sabemos o que
está no valor*/
int *p;

/*inicializa o valor de p para ter o valor do endereço de x,
Quando essa linha for executada, vamos alterar a variável p para
ter uma seta que aponta para x
*/
p = &x;

/*Temos o valor paara o qual p aponta, que é na verdade, a
variável x, que recebe o valor 4. O programa vai até o ponto
onde p aponta e alteramos o valor de x para 4.
*/
*p = 4;

/*A variável y que é inicializada com o valor para o qual p
aponta, ou seja, 4.
*/
int y = *p;

/*Declaramos uma variável q do tipo ponteiro inteiro que terá
um valor inicial de endereço de y. Ela terá uma seta que apont
para y.
*/
int *q =  &y;

/*Armazenamos o valor que criamos para o qual q aponta (a seta para y).
E o valor que vamos armazenar lá é aquele para o qual p aponta.
Ou seja, vamos pegar o valor para o qual p aponta (4), somar 1 (5)
e armazená-lo no local para o qual q aponta, o valor de y passa a ser 5.
*/
*q = *p + 1;

/*Temos que o valor de p é dado à variável q. Ou seja, substituiremos o valor de q
por uma seta que aponta para a coisa a qual  aponta, ou seja, o valor de x (4)
*/
q = p;
