#include <stdio.h>

void operadores() {
    int X, Z, W, K, M, N;
    float F;
    X = -2 * 3; // multiplicação
    Z = 4 % 2; // Módulo ou resto da divisão
    W = 8 / 4; // Divisão normal
    K = 7 / 2; // Divisão, porém como os operandos são inteiros o resultado vai ser um inteiro.
    F = 7.0 / 2.0; // Nesse caso o resultado vai ser um ponto flutuante
    M = W + X; // Soma normal
    N = M - K; // Subtração normal
    printf("X: %d\n", X);
    printf("Z: %d\n", Z);
    printf("W: %d\n", W);
    printf("K: %d\n", K);
    printf("F: %.2f\n", F);
    printf("M: %d\n", M);
    printf("N: %d\n", N);
}
