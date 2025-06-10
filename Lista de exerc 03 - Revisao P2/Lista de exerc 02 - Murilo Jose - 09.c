#include <stdio.h>
#define QUANTIDADE 10

struct Livro {
    char titulo[100];
    char autor[100];
    char editora[50];
    int ano;
};

void preencherTabela(struct Livro livros[], int qntd) {
    for (int i = 0; i < qntd; i++) {
        printf("\n\nLivro %d:", i + 1);

        printf("\nTitulo: ");
        fgets(livros[i].titulo, 100, stdin);

        printf("Autor: ");
        fgets(livros[i].autor, 100, stdin);

        printf("Editora: ");
        fgets(livros[i].editora, 50, stdin);

        printf("Ano de publicacao: ");
        scanf("%d", &livros[i].ano);
        getchar();
    }
}

void mostrarLivros(struct Livro livros[], int qntd) {
    for (int i = 0; i < qntd; i++) {
        printf("\n\nDados do livro %d:", i + 1);
        printf("\nTitulo: %s", livros[i].titulo);
        printf("Autor: %s", livros[i].autor);
        printf("Editora: %s", livros[i].editora);
        printf("Ano de Publicacao: %d", livros[i].ano);
    }
}

int main() {
    struct Livro livros[QUANTIDADE];

    preencherTabela(livros, QUANTIDADE);
    mostrarLivros(livros, QUANTIDADE);

    return 0;
}
