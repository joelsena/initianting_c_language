#include <stdio.h>

void spec_conversor() {
    int RANDOM_NUMBER = 603, x = 450;
    float f = 250.12345;
    char s[] = "Joel Sena";

    printf("%d -> inteiros decimais com sinal.\n", RANDOM_NUMBER);
    printf("%d -> inteiros decimais com sinal.\n", -RANDOM_NUMBER);
    printf("%i -> inteiros decimais com sinal.\n", RANDOM_NUMBER);
    printf("%o -> inteiro octal sem sinal.\n", RANDOM_NUMBER);
    printf("%u -> inteiros decimais sem sinal.\n", -RANDOM_NUMBER);
    printf("%u -> inteiros decimais sem sinal.\n", RANDOM_NUMBER);
    printf("%x -> inteiro hexadecimal sem sinal lower case.\n", RANDOM_NUMBER);
    printf("%X -> inteiro hexadecimal sem sinal upper case.\n", RANDOM_NUMBER);
    printf("%f -> valor de ponto flutuante.\n", 6032101.75);
    printf("%e -> valor de ponto flutuante em notação científica.\n", 6032101.75);
    printf("%e -> valor de ponto flutuante em notação científica.\n", -6032101.75);
    printf("%E -> valor de ponto flutuante em notação científica.\n", 6032101.75);
    printf("%s -> cadeia de caracteres.\n", "String de exemplo");
    printf("%c -> caracteres individuais(char).\n\n", 'T');

    printf("Tamanho dos campos\n");
    printf("%10d\n", 6);
    printf("%5d\n", 6);
    printf("%10d\n", 700);
    printf("%2c\n", 'B');
    printf("%10f\n", 23.8);
    // Alinhar os caracteres a esquerda é só adicionar '-' antes do número de campos
    printf("%-10d\n\n\n", 700);


    printf("Precisão em inteiros:\n");
    printf("%d\n", x);
    printf("%.5d\n", x);
    printf("%.12d\n", x);
    printf("\nPrecisão em ponto-flutuante:\n");
    printf("%f\n", f);
    printf("%.2f\n", f);
    printf("\nPrecisão em literais:\n");
    printf("%s\n", s);
    printf("%.5s\n", s);
    printf("%.6s\n", s);
}
