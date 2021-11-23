#include <stdio.h>

#define NUM_L 5
#define NUM_C 4

void matriz(){
    float notas[NUM_L][NUM_C] = {
        { 7.5, 6.8, 9.6, 6.7 },
        { 6.5, 6.3, 8.4, 7.6 },
        { 5.7, 8.6, 9.0, 4.5 },
        { 4.5, 5.8, 6.8, 7.0 },
        { 3.6, 7.6, 8.1, 6.5 },
    };

    printf("Exibindo o conteudo da matriz: \n\n");

    for(int lin = 0; lin < NUM_L; lin++) {
        for(int col = 0; col < NUM_C; col++) {
            printf("%5.1f", notas[lin][col]);
        }
        printf("\n");
    }
}
