#include <stdio.h>

#include <stdio.h>

void rodizio(int placa) {
    switch (placa) {
        case 1: case 2:
            printf("Segunda-feira.\n");
            break;
        case 3: case 4:
            printf("Terça-feira.\n");
            break;
        case 5: case 6:
            printf("Quarta-feira.\n");
            break;
        case 7: case 8:
            printf("Quinta-feira.\n");
            break;
        case 9: case 0:
            printf("Sexta-feira.\n");
            break;
    }
}

int main()
{
    int n;
    
    printf("Informe os digitos numerico da placa do carro: \n");
    
    do {
        scanf("%d", &n);
        
        if (n < 0 || n > 9999) {
            printf("\nDigite um numero entre 0 e 9999!\n");
        }
    } while (n < 0 || n > 9999);

    rodizio(n % 10); 

    return 0;
}