#include <stdio.h>

int main()
{
    int n, quadrado = 0;
    printf("Digite um numero natural\n");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        quadrado += (i*2) + 1;
    }
    
    printf("\n%d -> %d", n, quadrado);

    return 0;
}