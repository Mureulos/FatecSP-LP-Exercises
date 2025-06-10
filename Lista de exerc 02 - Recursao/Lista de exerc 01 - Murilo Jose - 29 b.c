#include <stdio.h>

int divisao(a, b):
    if b == 0:
        printf("Divisão por zero")
    if a < b:
        return a
    return divisao(a - b, b)

int main()
{
    int n1, n2;
    printf("Informe dois numeros reais: ");
    scanf("%d %d", &n1, &n2);
    
    printf("\nDivisão de %d / %d = %d", n1, n2, divisao(n1, n2));
    
    return 0;
}