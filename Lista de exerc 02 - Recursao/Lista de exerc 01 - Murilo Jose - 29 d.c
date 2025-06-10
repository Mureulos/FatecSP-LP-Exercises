#include <stdio.h>

float produto(float num1, float num2) {
    if (num2 == 0) return 0;
    if (num2 == 1) return num1;
    
    return num1 + produto(num1, num2 - 1);
}

int main()
{
    float n1, n2;
    printf("Informe dois número reais: ");
    scanf("%f %f", &n1, &n2);
    
    printf("\n%2.f * %2.f = %2.f", n1, n2, produto(n1, n2));
    
    return 0;
}