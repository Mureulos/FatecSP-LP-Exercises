#include <stdio.h>

void minimax(float *v, int n, float *min, float *max) {
    for(int i = 0; i < n; i++) {
        if (i == 0) {
            *min = v[i];
            *max = v[i];
        } else {
            if (v[i] > *max) {
                *max = v[i];
            }
            if (v[i] < *min) {
                *min = v[i];
            }
        }
    }
}

int main() {
    int n;
    float min, max;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    float vetor[n];

    for(int i = 0; i < n; i++) {
        printf("Informe o valor da posição %d: ", i);
        scanf("%f", &vetor[i]);
    }

    minimax(vetor, n, &min, &max);

    printf("\nMenor: %2.f", min);
    printf("\nMaior: %2.f", max);

    return 0;
}
