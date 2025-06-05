#include <stdio.h>

int main() {
    int faltas;
    float media;
    char conceito; 
    
    printf("Digite a quantidade de faltas\n");
    scanf("%d", &faltas);
    
    printf("\nDigite media do aluno\n");
    scanf("%f", &media);
    
    if (faltas > 5) {
        conceito = 'F';
    } else if (media < 6) {
        conceito = 'C';
    } else if (media < 7.5) {
        conceito = 'B';
    } else if (media < 9) {
        conceito = 'A';
    } else {
        conceito = 'E';
    }

    printf("\nConceito: %c", conceito);    

    return 0;
}