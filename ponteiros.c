#include <stdio.h>

void point() {
    // Ponteiro é uma variável especial que contém um endereço de memória armazendo, em vez de dados comuns.
    // Declarar ponteiros: tipo *nome;
    int *x, valor = 35, y;
    x = &valor; // Atribuindo o endereço de 'valor' a x.
    y = *x; // Atribuindo o conteúdo da variável apontada por x a y.

    printf("Endereço da variável comum 'valor': %p\n", &valor);
    printf("Lendo o conteúdo do ponteiro 'x': %p\n", x);
    printf("Endereço da variável ponteiro 'x': %p\n", &x);
    printf("Conteúdo da variável apontada por 'x': %d\n", *x);
    printf("Conteúdo da variável comum 'y': %d\n", y);

    // Indireção múltipla ou Ponteiros para ponteiros
    // Resumidamente é um ponteiro que aponta para outro ponteiro que aponta para uma variável normal
    // Declaração: tipo **nome;
    // Ex: int **valor; // Quanto mais ponteiros na cadeia mais asteriscos antes do nome.

}
