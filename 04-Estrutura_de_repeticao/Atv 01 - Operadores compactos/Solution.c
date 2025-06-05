#include <stdio.h>

int main() {
    int x = 3, y;
    y = x * (x + 1) * x++;
    printf("\nValor da primeira instrucao: %d", y);
    
    x = 5;
    y = 3;
    y *= x + 1;
    printf("\nValor da segunda instrucao: %d", y);
    
    return 0;
}