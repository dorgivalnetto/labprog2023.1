#include <stdio.h>
#include <stdlib.h>

int x = 3;

/*declara uma vari�vel p que � do tipo ponteiro inteiro
que ainda n�o foi inicializado, mas ainda n�o sabemos o que
est� no valor*/
int *p;

/*inicializa o valor de p para ter o valor do endere�o de x,
Quando essa linha for executada, vamos alterar a vari�vel p para
ter uma seta que aponta para x
*/
p = &x;

/*Temos o valor paara o qual p aponta, que � na verdade, a
vari�vel x, que recebe o valor 4. O programa vai at� o ponto
onde p aponta e alteramos o valor de x para 4.
*/
*p = 4;

/*A vari�vel y que � inicializada com o valor para o qual p
aponta, ou seja, 4.
*/
int y = *p;

/*Declaramos uma vari�vel q do tipo ponteiro inteiro que ter�
um valor inicial de endere�o de y. Ela ter� uma seta que apont
para y.
*/
int *q =  &y;

/*Armazenamos o valor que criamos para o qual q aponta (a seta para y).
E o valor que vamos armazenar l� � aquele para o qual p aponta.
Ou seja, vamos pegar o valor para o qual p aponta (4), somar 1 (5)
e armazen�-lo no local para o qual q aponta, o valor de y passa a ser 5.
*/
*q = *p + 1;

/*Temos que o valor de p � dado � vari�vel q. Ou seja, substituiremos o valor de q
por uma seta que aponta para a coisa a qual  aponta, ou seja, o valor de x (4)
*/
q = p;
