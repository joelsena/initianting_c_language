#include <stdio.h>

int indirecao() {
    int a = 40;
    int *pont1;
    int **pont2;
    pont1 = &a;
    pont2 = &pont1;

    // Indire��o m�ltipla ou Ponteiros para ponteiros
    // Resumidamente � um ponteiro que aponta para outro ponteiro que aponta para uma vari�vel normal
    // Declara��o: tipo **nome;
    // Ex: int **valor; // Quanto mais ponteiros na cadeia mais asteriscos antes do nome.

    printf("Endere�o da vari�vel comum 'a': %p\n", &a);
    printf("Endere�o do ponteiro 'pont1': %p\n", &pont1);
    printf("Endere�o do ponteiro 'pont2': %p\n", &pont2);
    printf("Endere�o apontado por 'pont1': %p\n", pont1);
    printf("Endere�o apontado por 'pont2': %p\n", pont2);
    printf("E o valor armazendo em 'a' pelo ponteiro 'pont2': %d\n", **pont2);

    return 0;
}
