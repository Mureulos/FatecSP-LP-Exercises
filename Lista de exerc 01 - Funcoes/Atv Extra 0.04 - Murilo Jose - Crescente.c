#include <stdio.h>

void crescente(int n1, int n2) {
    if (n2 > n1)
        printf("\n%d, %d", n1, n2);
    else
        printf("\n%d, %d", n2, n1);
}

int main()
{
    int n1, n2;
    
    printf("Digite dois numeros:\n");
    scanf("%d %d", &n1, &n2);
    
    crescente(n1, n2);
    
    return 0;
}