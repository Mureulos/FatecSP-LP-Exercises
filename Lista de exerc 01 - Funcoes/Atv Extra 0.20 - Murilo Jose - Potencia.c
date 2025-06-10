#include <stdio.h>

float potencia(int base, float expo) {
    float result = 1;
    
    while(expo > 0) {
        result = result * base;
        expo--;
    }
    
    return result;
}

int main() {
    int base;
    float expo, result;
    
    printf("Digite o valor da base e do expoente:\n");
    
    do {
        scanf("%d %f", &base, &expo);
        
        if (base < 0)
            printf("\nO valor da base precisa ser maior ou igual a 0\n");
        
        if (expo < 0) 
            printf("\nO valor do expoente precisa ser maior ou igual a 0\n");
        
    } while (base < 0 || expo < 0);
    
    
    printf("\n%d elevado a %2.f igual a %2.f", base, expo, potencia(base, expo));
    return 0;
}