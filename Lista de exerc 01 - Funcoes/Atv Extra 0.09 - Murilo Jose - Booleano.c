#include <stdio.h>

char* boolean(int expressao) {
    return ((expressao) > 0)? "true": "false";
}

int main()
{
    int n;
    printf("Digite um numero positivo: \n");
    
    do {
        scanf("%d", &n);
        
        if (n < 0) {
            printf("Digite um numero positivo!\n");
        }
    } while (n < 0);
    

    printf("\n%s", boolean(n));    

    return 0;
}