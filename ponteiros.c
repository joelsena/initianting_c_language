#include <stdio.h>

void point() {
    // Ponteiro � uma vari�vel especial que cont�m um endere�o de mem�ria armazendo, em vez de dados comuns.
    // Declarar ponteiros: tipo *nome;
    int *x, valor = 35, y;
    x = &valor; // Atribuindo o endere�o de 'valor' a x.
    y = *x; // Atribuindo o conte�do da vari�vel apontada por x a y.

    printf("Endere�o da vari�vel comum 'valor': %p\n", &valor);
    printf("Lendo o conte�do do ponteiro 'x': %p\n", x);
    printf("Endere�o da vari�vel ponteiro 'x': %p\n", &x);
    printf("Conte�do da vari�vel apontada por 'x': %d\n", *x);
    printf("Conte�do da vari�vel comum 'y': %d\n", y);

    // Indire��o m�ltipla ou Ponteiros para ponteiros
    // Resumidamente � um ponteiro que aponta para outro ponteiro que aponta para uma vari�vel normal
    // Declara��o: tipo **nome;
    // Ex: int **valor; // Quanto mais ponteiros na cadeia mais asteriscos antes do nome.

}
