#include <stdio.h>
#include <stdlib.h>
/*Uma estrutura do tipo Lista é uma sequência de elementos
do mesmo tipo. Seus elementos possuem estrutura interna
abstraída, ou seja, sua complexidade é arbitrária e não
afeta o seu funcionamento.

Uma Lista pode possuir N Nós (N >= 0) elementos
Se N = 0, dizemos que a Lista está vazia

Aplicações: cadastro de funcionários, itens de estoque, entre outros

Em uma Lista podemos realizar as seguintes operações básica:
 - Criação da lista
 - Inserção de um elemento
 - Exclusão de um elemento
 - Acesso a um elemento
 - Destruição da lista

Essas operações dependem do tipo de alocação de memória usada
 - Estática:
    - o espaço de memória é alocado no momento da compilação
    - exige a definição do número máximo de elementos da Lista
    - acesso sequencial: elementos consecutivos na memória


 - Dinâmica:
    - o espaço de memória é alocado em tempo de execução
    - a Lista cresce à medida que novos elementos são armazenados,
    e diminui à medidad que elementos são removidos
    - Acesso encadeado: cada elemento pode estar em uma área distinta
    da memória. Para acessar um elemento, é preciso percorrer todos
    os seus antecessores na Lista.

*/

int main(){

    system("pause");
    return 0;
}
