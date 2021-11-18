#include <stdio.h>
#include <stdlib.h>

void repeat() {
    float nota, media, total = 0;
    char cod = 'D';

    while(cod != 'F') {
        for(int c = 0; c < 4; c++) {
            printf("\nDigite a nota: ");
            scanf("%f", &nota);
            total += nota;
        }
        media = total / 4.0;
        printf("Média: %.2f\n", media);
        total = 0;
        nota = 0;
        printf("Pressione qualquer tecla para calcular outra media.(Pressione 'F' para encerrar)");
        cod = getche();
    }

    return 0;
}
