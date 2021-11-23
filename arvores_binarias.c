#include <stdio.h>

// Estrutura de dados representando uma �rvore bin�ria
typedef struct {
    // A informa��o em si do n�
    int info;
    // Um ponteiro que aponta para o n� a esquerda
    struct Arv* sae;
    // Um ponteiro que aponta para o n� a direita
    struct Arv* sad;
} Arv;

Arv* iniciar_noh(void);
Arv* cria_raiz(int, Arv*, Arv*);
int vazia(Arv*);
void imprime_pre(Arv*);

void arvores() {
    // Cria uma �rvore sendo a informa��o do n� raiz = 10 e as suas duas sub�rvores sendo ponteiros para null.
    Arv* arv_1 = cria_raiz(10, iniciar_noh(), iniciar_noh());
    Arv* arv_2 = cria_raiz(8, iniciar_noh(), arv_1);

    imprime_pre(arv_2);
}



// Uma �rvore sempre vai ser criada apartir da raiz
// Quando uma raiz aponta para NULL ela � um n� vazio(n�o tem ramifica��es)
// Apontando para um n� ela n�o estar� vazia
Arv* iniciar_noh(){
    // O ponteiro retornado aponta para NULL, ou seja, at� o momento o n� est� vazio
    return NULL;
}

// Cria um n� raiz junto com as suas duas sub�rvores, esquerda e a direita.
Arv* cria_raiz(int data, Arv* sae, Arv* sad){
    // Aloca um espa�o na mem�ria com o malloc()
    // e garante que o retorno � um ponteiro para uma struct Arv
    Arv* pont_raiz = (Arv*) malloc(sizeof(Arv));

    // Atribui os dados(dos par�metros) no ponteiro do n� raiz
    // "->": forma de acessar atributos de um ponteiro
    pont_raiz->info = data;
    pont_raiz->sae = sae;
    pont_raiz->sad = sad;
    return pont_raiz;
}

int vazia(Arv* a) {
    return a==NULL;
}

void imprime_pre(Arv* a) { /* Impress�o no percurso pr� ordem */
    if(!vazia(a)) {
        printf("%d ", a->info);
        // Recursividade
        imprime_pre(a->sae);
        imprime_pre(a->sad);
    }
}
