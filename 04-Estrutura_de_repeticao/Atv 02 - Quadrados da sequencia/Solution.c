#include <stdio.h>

int main()
{
    int n;
    
    printf("Digite uma sequencia de numeros diferentes de zero: ");
    scanf("%d", &n);
    
    while (n != 0) {
        if(n < 0) {
            printf("\n%d -> -%d\n", n, n*n);
        } else {
            printf("\n%d -> %d\n", n, n*n);
        }
        
        printf("\nDigite uma sequencia de numeros diferentes de zero: ");
        scanf("%d", &n);
    }

    return 0;
}