#include <stdio.h>

// Estrutura de dados representando uma árvore binária
typedef struct {
    // A informação em si do nó
    int info;
    // Um ponteiro que aponta para o nó a esquerda
    struct Arv* sae;
    // Um ponteiro que aponta para o nó a direita
    struct Arv* sad;
} Arv;

Arv* iniciar_noh(void);
Arv* cria_raiz(int, Arv*, Arv*);
int vazia(Arv*);
void imprime_pre(Arv*);

void arvores() {
    // Cria uma árvore sendo a informação do nó raiz = 10 e as suas duas subárvores sendo ponteiros para null.
    Arv* arv_1 = cria_raiz(10, iniciar_noh(), iniciar_noh());
    Arv* arv_2 = cria_raiz(8, iniciar_noh(), arv_1);

    imprime_pre(arv_2);
}



// Uma árvore sempre vai ser criada apartir da raiz
// Quando uma raiz aponta para NULL ela é um nó vazio(não tem ramificações)
// Apontando para um nó ela não estará vazia
Arv* iniciar_noh(){
    // O ponteiro retornado aponta para NULL, ou seja, até o momento o nó está vazio
    return NULL;
}

// Cria um nó raiz junto com as suas duas subárvores, esquerda e a direita.
Arv* cria_raiz(int data, Arv* sae, Arv* sad){
    // Aloca um espaço na memória com o malloc()
    // e garante que o retorno é um ponteiro para uma struct Arv
    Arv* pont_raiz = (Arv*) malloc(sizeof(Arv));

    // Atribui os dados(dos parâmetros) no ponteiro do nó raiz
    // "->": forma de acessar atributos de um ponteiro
    pont_raiz->info = data;
    pont_raiz->sae = sae;
    pont_raiz->sad = sad;
    return pont_raiz;
}

int vazia(Arv* a) {
    return a==NULL;
}

void imprime_pre(Arv* a) { /* Impressão no percurso pré ordem */
    if(!vazia(a)) {
        printf("%d ", a->info);
        // Recursividade
        imprime_pre(a->sae);
        imprime_pre(a->sad);
    }
}
