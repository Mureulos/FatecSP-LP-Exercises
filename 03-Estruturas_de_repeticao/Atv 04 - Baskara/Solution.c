#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Digite o coeficientes 'a': ");
    scanf("%f", &a);

    if (a == 0) {
        printf("'a' deve ser diferente de zero\n");
        return 1;
    }
    
    printf("Digite o coeficiente 'b': ");
    scanf("%f", &b);


    printf("Digite o coeficiente 'c': ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Nao possui raizes reais\n");
        
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Unica raiz: x = %2.f", x1);
        
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raizes: x1 = %2.f e x2 = %2.f", x1, x2);
    }

    return 0;
}
