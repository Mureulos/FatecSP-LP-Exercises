#include <stdio.h>

unsigned int produto(unsigned int a, unsigned int b) {
    if (a == 0) 
        return 0;
        
    if (a == 1) 
        return b;
    
    return b + produto(a - 1, b);
}

int main() {
    unsigned int x, y;
    
    printf("Digite dois naturais: ");
    scanf("%u %u", &x, &y);
    
    printf("\n%u * %u = %u\n", x, y, produto(x, y));
    return 0;
}


/*
    Solução trivial: a == 0 e a == 1
    Solução geral: a * b = b + (a − 1) × b
    Esta diminuindo: Sim. A cada chamada recursiva o valor de a é reduzido (a - 1)
*/