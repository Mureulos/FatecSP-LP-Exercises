#include <stdio.h>

int main()
{
    float f;
    printf("Digite uma temperatura em graus Fahrenheit: ");
    scanf("%f", &f);
    
    float c = (f - 32) * 5 / 9;
    printf("\nA temperatura em graus Celcius é: %2.f°", c);

    return 0;
}