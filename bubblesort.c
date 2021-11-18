#include <stdio.h>
#include <locale.h>

void bubblesort(int tam, int* array);

void test_bubblesort(){
    setlocale(LC_ALL, "");

    int TAM_ARRAY = 10;
    int numbers[TAM_ARRAY];

    printf("Entre com dez números para preencher o array, e pressione enter após digitar cada um:\n");
    for(int c = 0; c < TAM_ARRAY; c++) {
        scanf("%d", &numbers[c]);
    }

    printf("Array na ordem atual:\n");

    for(int i = 0; i < TAM_ARRAY; i++) {
        printf("%4d", numbers[i]);
    }

    bubblesort(TAM_ARRAY, &numbers);

    printf("\nArray em ordem crescente:\n");
    for(int i = 0; i < TAM_ARRAY; i++) {
        printf("%4d", numbers[i]);
    }
}

void bubblesort(int tam, int* array) {
    int aux;

    // Repetir até a última ocorrência
    for(int cont=1; cont<tam; cont++) {
        for(int i = 0; i < tam - 1; i++) {
            if(array[i] > array[i + 1]) {
                aux = array[i];

                // O item anterior recebe o próximo item
                array[i] = array[i + 1];
                // E o próximo item recebe o item anterior
                array[i + 1] = aux;
            }
        }
    }
}
