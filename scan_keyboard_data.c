#include <stdio.h>

void keyboard_data() {
    int inteiro1;
    float f1, f2;
    char letra;
    char frase[15];

    int dia, mes, ano;

    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro1);
    printf("Digite dois numeros quebrados: ");
    scanf("%f%f", &f1, &f2);
    printf("Digite um caractere: ");
    scanf("%c", &letra);
    printf("Digite uma frase: ");
    scanf("%s", &frase);

    printf("\nNumero inteiro: %d\n", inteiro1);
    printf("\nPonto flutuante: %.2f e %.2f\n", f1, f2);
    printf("\nCaractere: %c\n", letra);
    printf("\nFrase: %s\n", frase);

    // Descartando caracteres durante a leitura
    printf("\n------------------------------\n");
    printf("Digite uma data no formato dd/mm/aa: ");
    // '%*c' significa que o scan vai ignorar algum caracter durante a leitura
    scanf("%d%*c%d%*c%d", &dia, &mes, &ano);
    printf("\nData: %.2d/%.2d/%d \n", dia, mes, ano);

}
