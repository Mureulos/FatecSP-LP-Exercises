#include <stdio.h>

float reajuste(int salario) {
    float salarioReajustado = salario + (salario*0.05);
    
    if(salarioReajustado <= 750)
        return salarioReajustado += 100;
    
    return salarioReajustado;
}

int main()
{
    float n;
    printf("Digite o salario:\n");
    
    do {
        scanf("%f", &n);
        
        if (n <= 0) {
            printf("\nSeu salario precisa ser maior que 0\n");
        }
    } while (n <= 0);
    
    printf("\nO salario reajustado e: %.2f", reajuste(n));
    
    return 0;
}