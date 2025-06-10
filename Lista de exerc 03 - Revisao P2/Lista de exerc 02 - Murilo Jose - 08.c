#include <stdio.h>

struct Livro {
    char titulo[100];
    char autor[100];
    char editora[50];
    int ano;
};

int main() {
    struct Livro livro1 = {
        "Java, como programar",
        "Deitel, H.M.; Deitel, P.J.",
        "Prentice Hall",
        2006
    };

    printf("Título: %s\n", livro1.titulo);
    printf("Autor: %s\n", livro1.autor);
    printf("Editora: %s\n", livro1.editora);
    printf("Ano de Publicação: %d\n", livro1.ano);

    return 0;
}
