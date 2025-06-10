#include <stdio.h>
#include <math.h>

float soma(int base, float seq) {
    int soma = 0;
    
    for (int i = 0; i < seq; i++) {
        soma += pow(base, i);
    }
    
    return soma;
}

int main() {
    int base;
    float seq, result;
    
    printf("Digite o valor da base (Maior ou igual a 0) e da sequencia (Maior ou igual a 0):\n");
    
    do {
        scanf("%d %f", &base, &seq);
        
        if (base < 0)
            printf("\nO valor da base precisa ser maior ou igual a 0\n");
        
        if (seq < 0) 
            printf("\nO valor da sequencia precisa ser maior ou igual a 0\n");
        
    } while (base < 0 || seq < 0);
    
    
    printf("\nA soma da sequencia e igual a %2.f", soma(base, seq));
    return 0;
}