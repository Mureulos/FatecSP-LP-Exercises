#include <stdio.h>

int fatorial(int numero) {
    int aux = 1, fat = 1;

    if (numero == 0) {
        return 1;
    } else {
        while (aux <= numero) {
            fat *= aux;
            aux++;
        }
        return fat;
    }
}

int main() {
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("%d! = %d\n", n, fatorial(n));
    return 0;
}
