#include <stdio.h>
#include <string.h>

int main() {
    char frase[1000];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    int tamanho = strlen(frase);
    if (frase[tamanho - 1] == '\n') {
        frase[tamanho - 1] = '\0';
        tamanho--;
    }

    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", frase[i]);
    }

    return 0;
}