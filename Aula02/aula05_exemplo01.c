Tipo Abstrato de Dados

Tipo de dado: define o conunto de valores (domínio) que
uma variável pode assumir. Por exemplo:
int ..., -2, -1, 0, +1, +2, +3, ...




Estrutura de Dados: trata-se de um relacionamento lógico
entre os tipos de dados. Por exemplo:

struct float, char, int que, juntos, têm um significado



Tipos Abstratos de Dados ou TAD incluem as operações para
a manipulação dos dados. Por exemplo:
     - Criação da estrutura
     - Inclusão de um elemento
     - Remoção de um elemento
     - Acesso a um elemento
     - Entre outros



Vantagens:
    - Encapsulamento e Segurança: usuário não tem acesso
    direto aos dados.
    - Flexibilidade e Reutilização: podemos alterar o TAD sem
    alterar as aplicações que o utilizam.


Exemplo de TAD: arquivos em C
    FILE* f;

    Os dados de f somente podem ser acessados pelas funções
    de manipulação do tipo:
        - fopen();
        - fclose();
        - fputc();
        - fgetc();
        - feof();
        ...

