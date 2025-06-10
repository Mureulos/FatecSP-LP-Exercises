#include <stdio.h>

int maior(int n1, int n2, int n3) {
    int aux;
    
    if(n1 > n2) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    
    if (n1 > n3) {
        aux = n1;
        n1 = n3;
        n3 = aux;
    }
    
    if (n2 > n3) {
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
    
    return n3;
}

int main()
{
    int n1, n2, n3;
    
    printf("Digite tres numeros:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    printf("\nO maior numero e: %d", maior(n1, n2, n3));
    
    return 0;
}