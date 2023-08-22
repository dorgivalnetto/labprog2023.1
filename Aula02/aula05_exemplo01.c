Tipo Abstrato de Dados

Tipo de dado: define o conunto de valores (dom�nio) que
uma vari�vel pode assumir. Por exemplo:
int ..., -2, -1, 0, +1, +2, +3, ...




Estrutura de Dados: trata-se de um relacionamento l�gico
entre os tipos de dados. Por exemplo:

struct float, char, int que, juntos, t�m um significado



Tipos Abstratos de Dados ou TAD incluem as opera��es para
a manipula��o dos dados. Por exemplo:
     - Cria��o da estrutura
     - Inclus�o de um elemento
     - Remo��o de um elemento
     - Acesso a um elemento
     - Entre outros



Vantagens:
    - Encapsulamento e Seguran�a: usu�rio n�o tem acesso
    direto aos dados.
    - Flexibilidade e Reutiliza��o: podemos alterar o TAD sem
    alterar as aplica��es que o utilizam.


Exemplo de TAD: arquivos em C
    FILE* f;

    Os dados de f somente podem ser acessados pelas fun��es
    de manipula��o do tipo:
        - fopen();
        - fclose();
        - fputc();
        - fgetc();
        - feof();
        ...

