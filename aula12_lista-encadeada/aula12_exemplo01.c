#include stdio.h>
#include <stdlib.h>

int main(){
    /*Lista dinâmica encadeada: tipo de Lista onde
    cada elemento aponta para o seu sucessor na lista.
    Usa um ponteiro especial para o primeiro elemento
    da lista e uma indicação de final de lista.
    */

    //Ver Slide 10

    /*
     - Cada elemento é tratado como um ponteiro que é
    alocado dinamicamente, à medida que os dados são inseridos.
     - Para guardar o primeiro elemento, utilizamos um ponteiro
     para ponteiro.
     - Um ponteiro para ponteiro pode guardas o endereço de um
     ponteiro.
     - Assim, fica fácil mudar quem está no início da lista
     mudando o conteúdo do ponteiro para ponteiro.

     Vantagens:
      - Melhor utilização dos recursos de memória.
      - Não precisa movimentar os elementos nas operações de
      inserção e remoção.

      //Ver Slide 11

    Desvantagens:
     - Acesso indireto aos elementos. Não é possível acessar pela posição.
     - Necessidade de percorrer a lista a partir do início (ou de onde
     quer que comece) e seguir os ponteiros de um elemento para o próximo
     até chegar ao elemeto desejado.
     - Isso torna a lista dinâmica encadeada menos eficiente em termos de
     tempo de execução.

    Quando utilizar?
     - Não há necessidade de garantir um espaço mínimo para a execução
      da aplicação.
     - Inserção/remoção em lista ordenada são as operações mais frequentes.

    */
}
