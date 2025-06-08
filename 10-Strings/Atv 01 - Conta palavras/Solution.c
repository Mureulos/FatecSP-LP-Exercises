#include <stdio.h>

int main() {
    char s[100];
    int contador = 0, i = 0;
    
    printf("Digite uma frase:");
    fgets(s, 100, stdin);
    
    while(s[i] != '\0') {
        if (s[i] != ' ') {
            i++;
            
        } else {
            contador++;
            
            while(s[i] == ' ') {
                i++;
            }
        } 
    }
    
    contador++;
    printf("\nTotal de palavras: %d", contador);
    
    return 0;
}