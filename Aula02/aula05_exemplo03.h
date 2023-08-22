//Arquivo aula05_exemplo03.h

//Ponto é um "apelido" para a minha estrutura
typedef struct ponto Ponto;

//Cria um novo ponto. Equivalente ao FOPEN
Ponto* ponto_cria(float x, float y);

//Libera um ponto. Equivalente ao FCLOSE
void ponto_libera(Ponto* p);

//Acessa os valores X e Y de um ponto
void ponto_acessa(Ponto* p, float* x, float* y);

//Atribui os valores x e y a um ponto
void ponto_atribui(Ponto* p, float x, float y);

//Calcula a distância entre dois pontos
float ponto_distancia(Ponto* p1, Ponto* p2);
