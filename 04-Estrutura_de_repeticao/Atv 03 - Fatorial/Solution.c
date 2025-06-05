#include <stdio.h>

int main() {
    int n, aux = 1, fat = 1;

    printf("Digite um número: ");
    scanf("%d", &n);
    
    if (n == 0) {
        fat = 1;
    } else {
        while (aux <= n) {
            fat = fat * aux;
            aux = aux + 1;
        }
    }

    printf("%d! = %d\n", n, fat);
    return 0;
}