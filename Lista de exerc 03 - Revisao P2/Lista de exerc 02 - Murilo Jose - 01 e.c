#include <stdio.h>

void contagem(int n) {
    if (n < 0) return;

    printf("\n%d", n);
    contagem(n - 1);
}

int main() {
    int n;
    printf("Informe um numero: ");
    scanf("%d", &n);

    contagem(n);
    return 0;
}
