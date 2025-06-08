#include <stdio.h>
#include <string.h>

int strpos(char s[], char c) {
    int i = 0;
    
    while (s[i] != '\0' && s[i] != c) {
        i++;
    }
    
    if (s[i] == c) {
        return i;
    }
    
    return -1;
}

int main() {
    char s[100];
    char c;
    int i;

    printf("\nDigite uma frase: ");
    fgets(s, 100, stdin);

    printf("\nQual caractere deseja procurar? ");
    c = getchar();
    i = strpos(s, c);

    if (i != -1) 
        printf("\nCaractere na posicao %d.", i + 1);
    else
        printf("\nCaractere nao encontrado.");

    return 0;
}