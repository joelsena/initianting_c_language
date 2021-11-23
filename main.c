// Inclui no compilador esses cabe�alhos que cont�m c�digos reutiliz�veis.
// .h => header(cabe�alho).
#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

// Fun��es precisam ser declaradas antes do main.
// Ex: void escrevaNome(); // E, posteriormente, eu posso escrever o c�digo dessa fun��o. // Prot�tipo de fun��o
// Pincipal fun��o na linguagem C, que vai ser necess�ria na hora da compila��o.
int main() {
    // typedef enum {true=1, false=0} test;
    // printf(test);

    // Arquivo soma.c
    // soma();

    // Arquivo sizeof.c
    // typesize();

    // Arquivo especificadores_de_convers�o.c
    // spec_conversor();

    // Arquivo sequencias_de_escape.c
    // sequences();

    // Arquivo scan_keyboard_data.c
    // keyboard_data(); // scanf[

    // Arquivo operadores_aritmeticos.c
    // operadores();

    // Arquivo calculadora.c
    // calculadora();

    // Arquivo estrutura de repeti��o.c
    // repeat();

    // Arquivo bubblesort.c
    // test_bubblesort();

    // Arquivo matriz.c
    // matriz();

    // ======== Headers ============
    // Novamente, incluimos o custom header no arquivo desejado e iremos utilizar suas fun��es como qualquer outra lib
    /* printf("Usando headers\n");
    int y = 5;
    int quad = quadrado(y);
    int cub = cubo(y);

    printf("Quadrado de %d: %d\n", y, quad);
    printf("Cubo de %d: %d\n", y, cub);
    printf("Valor da constante PI: %f\n", _PI);

    // Arquivo ponteiros.c
    point();

    return 0; */

    // Arquivo indirecal_multipla.c
    // indirecao();

    // Arquivo estruturas.c
    // estruturas();

    // Arquivo arvores_binarias.c
    arvores();
}
