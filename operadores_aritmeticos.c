#include <stdio.h>

void operadores() {
    int X, Z, W, K, M, N;
    float F;
    X = -2 * 3; // multiplica��o
    Z = 4 % 2; // M�dulo ou resto da divis�o
    W = 8 / 4; // Divis�o normal
    K = 7 / 2; // Divis�o, por�m como os operandos s�o inteiros o resultado vai ser um inteiro.
    F = 7.0 / 2.0; // Nesse caso o resultado vai ser um ponto flutuante
    M = W + X; // Soma normal
    N = M - K; // Subtra��o normal
    printf("X: %d\n", X);
    printf("Z: %d\n", Z);
    printf("W: %d\n", W);
    printf("K: %d\n", K);
    printf("F: %.2f\n", F);
    printf("M: %d\n", M);
    printf("N: %d\n", N);
}
