#include <stdio.h>

void soma() {
    int n1, n2, soma;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &n1);

    printf("Digite o segundo numero:\n");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("Soma: %d", soma);
}
