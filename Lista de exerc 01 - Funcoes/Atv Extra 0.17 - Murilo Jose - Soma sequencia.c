#include <stdio.h>

int tamanhoSequencia() {
    int tamanho;
    
    printf("Informe o tamanho da sequencia de numeros (Maior que 0)\n");
    
    do {
        scanf("%d", &tamanho);
        
        if (tamanho <= 0)
            printf("\nA sequencia precisa ser maior que 0!\n");
            
    } while (tamanho <= 0);
    
    return tamanho;
}

float sequencia() {
    int tamanho = tamanhoSequencia();
    int contador = 1;
    float elemento, soma = 0;
    
    while (tamanho > 0) {
        printf("Valor %d da sequencia: ", contador);
        scanf("%f", &elemento);
        
        if (elemento <= 0) 
            printf("Digite um numero maior que 0!\n");
            
        else {
            soma += elemento;
            tamanho--;
            contador++;
        }
    }
    
    return soma;
}

int main()
{
    printf("\nTotal da soma: %2.f", sequencia());
    return 0;
}