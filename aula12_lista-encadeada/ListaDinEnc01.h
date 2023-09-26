struct aluno{
 int matricula;
 char nome[30];
 float n1, n2, n3;
};

//Lista é um ponteiro para uma estrutura chamada elemento
typedef struct elemento* Lista;

Lista* cria_lista();

void libera_lista(Lista* li);

int tamanho_lista(Lista* l1);

int lista_vazia(Lista* li);

int insere_lista_inicio(Lista* li, struct aluno al);

int insere_lista_final(Lista* li, struct aluno al);
