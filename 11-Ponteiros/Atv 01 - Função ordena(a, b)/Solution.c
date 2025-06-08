#include <stdio.h>

void ordena(int *x, int *y) {
    if (*x > *y) {
        int aux = *x;
        *x = *y;
        *y = aux;
    }
}

int main() {
    int a, b;

    printf("Informe os valores de A e B:\n");
    scanf("%d %d", &a, &b);
    
    ordena(&a, &b);

    printf("\nA = %d, B = %d\n", a, b);
    printf("%d, %d", a, b);
    
    return 0;
}