#include <stdio.h>

void imprimeInvertido(int n) {
    if (n < 10) {
        printf("%u", n);
    } else {
        printf("%u", n % 10);
        imprimeInvertido(n / 10);
    }
}

int main() {
    int num;
    
    printf("Digite um número natural: ");
    scanf("%u", &num);
    
    printf("\nDígitos invertidos: ");
    imprimeInvertido(num);
    
    return 0;
}