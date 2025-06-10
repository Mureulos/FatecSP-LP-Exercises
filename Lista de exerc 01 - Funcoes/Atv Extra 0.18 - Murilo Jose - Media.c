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
    float elemento, soma = 0, media;
    
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
    
    media = soma/(contador - 1);
    return media;
}

int main()
{
    printf("\nMedia da sequencia: %2.f", sequencia());
    return 0;
}