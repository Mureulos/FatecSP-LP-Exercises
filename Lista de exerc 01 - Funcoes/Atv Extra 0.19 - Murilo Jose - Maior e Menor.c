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

int main()
{
    int tamanho = tamanhoSequencia();
    int contador = 1;
    float elemento, maior = 0, menor;
    
    do {
        printf("Valor %d da sequencia: ", contador);
        scanf("%f", &elemento);
        
        if (elemento <= 0) 
            printf("Digite um numero maior que 0!\n\n");
            
        else {
            if (elemento > maior)
                maior = elemento;
                
            if (contador == 1)
                menor = elemento;
            else if (elemento < menor)
                menor = elemento;
            
            tamanho--;
            contador++;
        }
    } while (tamanho > 0);
    
    printf("\nMaior da sequencia: %2.f", maior);
    printf("\nMenor da sequencia: %2.f", menor);
    return 0;
}