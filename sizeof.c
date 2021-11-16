#include <stdio.h>

void typesize () {
    // Função ou operador "sizeof" retorna o tamanho(em bytes) do que foi passado nos parâmetros
    printf("Tamanho do armazenamento do tipo 'int': %d bytes\n", sizeof(int));
    printf("Tamanho do armazenamento do tipo 'short': %d bytes\n", sizeof(short));
    printf("Tamanho do armazenamento do tipo 'long': %d bytes\n\n", sizeof(long));

    printf("Tamanho do armazenamento do tipo 'float': %d bytes\n", sizeof(float));
    printf("Tamanho do armazenamento do tipo 'double': %d bytes\n", sizeof(double));
    printf("Tamanho do armazenamento do tipo 'long double': %d bytes\n\n", sizeof(long double));
}
