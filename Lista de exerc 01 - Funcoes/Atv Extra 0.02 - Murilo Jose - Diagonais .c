#include <stdio.h>

int diagonais(int lado) {
    return (lado*(lado - 3)/2);
}

int main()
{
    int n;
    
    printf("Digite o numero de lados do poligo convexo:\n");
    
    do {
        scanf("%d", &n);
        
        if (n < 3) {
            printf("\nPrecisa ser maior ou igual a 3!\n");
        }
    } while (n < 3);
    
    printf("\nO numero de lados do poligono e: %d", diagonais(n));
    
    return 0;
}