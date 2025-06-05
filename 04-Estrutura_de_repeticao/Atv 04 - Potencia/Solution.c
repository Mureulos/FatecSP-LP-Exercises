#include <stdio.h>

int main() {
    int base, expo, result = 1;
    
    printf("Digite um numero\n");
    scanf("%d", &base);
    
    printf("\nDigite a potencia desse numero\n");
    scanf("%d", &expo);
    
    int aux = expo;
    
    if(expo == 0) {
        printf("\n%d elevado a %d igual a %d", base, expo, result);
        return 0;
        
    } else {
        while(aux > 0) {
            result = result * base;
            aux--;
        }
    }
    
    printf("\n%d elevado a %d igual a %d", base, expo, result);
    return 0;
}