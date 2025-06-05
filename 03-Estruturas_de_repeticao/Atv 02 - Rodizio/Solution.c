#include <stdio.h>

int main() {
    int digito;

    printf("Digite o último dígito da placa do carro para descobrir o rodízio: ");
    scanf("%d", &digito);

    switch (digito) {
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
        default:
            printf("Informe um número de 0 a 9.\n");
    }

    return 0;
}
