#include <stdio.h>
#define max 7

void obtem(float temp[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Informe a temperatura do dia %d: ", i + 1);
        scanf("%f", &temp[i]);
    }
}

float media(float temp[], int tamanho) {
    float soma = 0.0;
    
    for (int i = 0; i < tamanho; i++) {
        soma += temp[i];
    }
    
    return soma / tamanho;
}

int conta(float temp[], int tamanho, float m) {
    int contador = 0;
    
    for (int i = 0; i < tamanho; i++) {
        if (temp[i] > m) {
            contador++;
        }
    }
    
    return contador;
}

int main() {
    float temp[max], m;
    
    obtem(temp, max);
    m = media(temp, max);
    
    printf("\nTemperatura média da semana: %.2f\n", m);
    printf("\nEstatística: %d dia(s) acima da média.\n", conta(temp, max, m));
    
    return 0;
}
