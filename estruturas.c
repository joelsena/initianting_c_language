#include <stdio.h>
#include <stdlib.h>

struct Livro {
    char nome[30];
    char autor[50];
    int paginas;
    float preco;
};

int estruturas() {
    struct Livro livro1;
    printf("Cadastrando livro\n");
    printf("\nDigite o nome do livro:\n");
    gets(livro1.nome);
    printf("\nDigite o nome do autor:\n");
    gets(livro1.autor);
    printf("\nDigite o número de páginas do livro: \n");
    scanf("%d", &livro1.paginas);
    printf("\nEntre com o preço do livro:\n");
    scanf("%f", &livro1.preco);

    printf("\nO livro \"%s\" possui %d páginas e custa R$ %4.2f", livro1.nome, livro1.paginas, livro1.preco);
}
