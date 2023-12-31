#include <stdio.h>
#include <stdlib.h>

struct elemento{
    struct aluno dados;
    struct elemento *prox;
};

typedef struct elemento Elem;

Lista* cria_lista(){
    Lista* li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL)
        *li = NULL;
    return li;
}

void libera_lista(Lista* li){
    if(li != NULL){
        Elem* no;
        while((*li) != NULL){
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}


if(tamanho_lista(Lista* li)){
    if(li == NULL)
        return 0;
    int cont = 0;
    Elem* no = *li;
    while(no != NULL){
        cont++;
        no = no-> prox;
    }
    return cont;
}

int lista_vazia(Lista* li){
    if(li == NULL)
        return 1;
    if(*li == NULL)
        return 1;
    return 0;
}

int insere_lista_inicio(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;
    Elem* no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL)
        return 0;
    no->dados = al;
    no->prox = (*li);
    *li = no;
    return 1;
}

int insere_lista_final(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;
    Elem *no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL)
        return 0;
    no->dados = al;
    no->prox = NULL;
    if((*li) == NULL){ //lista vazia, insere no in�cio
        *li = no;
    } else{
        Elem *aux = *li;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = no;
    }
    return 1;
}


int main(){
Lista *li; //ponteiro para ponteiro

//Ver slide 13
li = cria_lista();

//Ver slide 14
libera_lista(li);

//Ver slide 15
int x = tamanho_lista(li);

int y = lista_vazia(Lista* li);

//Ver slide 16


//Ver slide 17
int z = insere_lista_inicio(li, dados_aluno);

//Ver slide 18
int z = insere_lista_final(li, dados_aluno);

//Ver slide 20
}


