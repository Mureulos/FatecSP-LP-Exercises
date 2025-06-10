#include <stdio.h>

int maior(int n1, int n2) {
    return (n1 >= n2 )? n1 : n2;
}

int main() {
    int n1, n2;
    
    printf("Digite dois numeros:\n");
    scanf("%d %d", &n1, &n2);
    
    printf("\nO maior numero e: %d", maior(n1, n2));
    
    return 0;
}