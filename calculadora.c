#include <stdio.h>

void  calculadora() {
    float n1, n2, res;
    char op;


    printf("\n====================\n");
    printf("%s", "Calculadora Simples");
    printf("\n====================\n");

    printf("Digite uma expressão matemática no formato <n1> <op> <n2>.\n");
    printf("Tabela dos operadores:\n");
    printf("\n\t+ => soma\n\t- => subtracao\n\t* => multiplicacao\n\t/ => divisao\n\tp => exponenciacao\n\n");
    printf("Ex: 2 + 4\n");
    printf("Operacao: ");
    scanf("%f%*c%c%*c%f", &n1, &op, &n2);

    calculate(&n1, &n2, op, &res);
    printf("%.1f %c %.1f = %.2f", n1, op, n2, res);
}
