#include <stdio.h>

float entrada() {
    float total, n;
    
    printf("Informe o preco da mercadoria (Digite 0 para finalizar): \n");
    
    do {
        scanf("%f", &n);
        
        if (n < 0) 
            printf("\nDigite um numero maior que 0!\n");
        else 
            total += n;
    } while (n != 0);
    
    return total;
}

float desconto(float salario) {
    if (salario < 50)
        return salario * 0.95;
        
    else if (salario < 100)
        return salario * 0.9;
        
    else if (salario < 200)
        return salario * 0.85;

    return salario * 0.8;
}

int main()
{
    float total, totalComDesconto;
    
    total = entrada();
    totalComDesconto = desconto(total);
    
    
    if (total != 0) {
        printf("\nO valor a ser pago e: %2.f", totalComDesconto);
    }

    return 0;
}