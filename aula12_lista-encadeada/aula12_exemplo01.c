#include stdio.h>
#include <stdlib.h>

int main(){
    /*Lista din�mica encadeada: tipo de Lista onde
    cada elemento aponta para o seu sucessor na lista.
    Usa um ponteiro especial para o primeiro elemento
    da lista e uma indica��o de final de lista.
    */

    //Ver Slide 10

    /*
     - Cada elemento � tratado como um ponteiro que �
    alocado dinamicamente, � medida que os dados s�o inseridos.
     - Para guardar o primeiro elemento, utilizamos um ponteiro
     para ponteiro.
     - Um ponteiro para ponteiro pode guardas o endere�o de um
     ponteiro.
     - Assim, fica f�cil mudar quem est� no in�cio da lista
     mudando o conte�do do ponteiro para ponteiro.

     Vantagens:
      - Melhor utiliza��o dos recursos de mem�ria.
      - N�o precisa movimentar os elementos nas opera��es de
      inser��o e remo��o.

      //Ver Slide 11

    Desvantagens:
     - Acesso indireto aos elementos. N�o � poss�vel acessar pela posi��o.
     - Necessidade de percorrer a lista a partir do in�cio (ou de onde
     quer que comece) e seguir os ponteiros de um elemento para o pr�ximo
     at� chegar ao elemeto desejado.
     - Isso torna a lista din�mica encadeada menos eficiente em termos de
     tempo de execu��o.

    Quando utilizar?
     - N�o h� necessidade de garantir um espa�o m�nimo para a execu��o
      da aplica��o.
     - Inser��o/remo��o em lista ordenada s�o as opera��es mais frequentes.

    */
}
