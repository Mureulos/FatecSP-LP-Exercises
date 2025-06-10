#include <stdio.h>

void erro(int n1) {
    printf("\n%d %s", n1, (n1 > 1)? "erros detectados" : "erro detectado");
}

int main() {
    int n1;
    
    printf("Digite a quantidade de erros:\n");
    scanf("%d", &n1);
    
    erro(n1);
    
    return 0;
}