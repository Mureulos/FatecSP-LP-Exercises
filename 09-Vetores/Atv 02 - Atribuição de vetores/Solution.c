#include <stdio.h>

int main() {
    int w[9] = {0};
    int i = 5;

    w[0] = 17;
    w[i / 2] = 9;
    w[2 * i - 2] = 95;
    w[i - 1] = w[8] / 2;
    w[i] = w[2];
    w[i + 1] = w[i] + w[i - 1];
    w[w[2] - 2] = 78;
    w[1] = w[w[i] - 1];

    printf("Vetor w: ");
    for (int j = 0; j < 9; j++) {
        printf("%d ", w[j]);
    }

    return 0;
}

// Resultado do vetor W: [17, 95, 9, 0, 47, 9, 56, 78, 95]