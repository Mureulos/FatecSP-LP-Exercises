#include <stdio.h>
#define PI 3.1415

int main()
{
    float raio, area, perimetro;
    printf("Digite raio para o circulo: ");
    scanf("%f", &raio);
    
    area = PI * (raio * raio);
    perimetro = (2 * PI * raio);
    
    printf("\nA área do círculo é: %.2f\n", area);
    printf("O perímetro do círculo é: %.2f\n", perimetro);

    return 0;
}