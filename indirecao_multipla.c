#include <stdio.h>

int indirecao() {
    int a = 40;
    int *pont1;
    int **pont2;
    pont1 = &a;
    pont2 = &pont1;

    // Indireção múltipla ou Ponteiros para ponteiros
    // Resumidamente é um ponteiro que aponta para outro ponteiro que aponta para uma variável normal
    // Declaração: tipo **nome;
    // Ex: int **valor; // Quanto mais ponteiros na cadeia mais asteriscos antes do nome.

    printf("Endereço da variável comum 'a': %p\n", &a);
    printf("Endereço do ponteiro 'pont1': %p\n", &pont1);
    printf("Endereço do ponteiro 'pont2': %p\n", &pont2);
    printf("Endereço apontado por 'pont1': %p\n", pont1);
    printf("Endereço apontado por 'pont2': %p\n", pont2);
    printf("E o valor armazendo em 'a' pelo ponteiro 'pont2': %d\n", **pont2);

    return 0;
}
