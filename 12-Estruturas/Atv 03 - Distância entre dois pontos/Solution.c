#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} PONTO;

float calculaDistancia(PONTO p1, PONTO p2) {
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    return sqrt(pow(dx, 2) + pow(dy, 2));
}

int main() {
    PONTO p, q;

    printf("Digite as coordenadas do ponto A (x y): ");
    scanf("%f %f", &p.x, &p.y);

    printf("\nDigite as coordenadas do ponto B (x y): ");
    scanf("%f %f", &q.x, &q.y);

    float distancia = calculaDistancia(p, q);

    printf("\nA distancia entre os pontos A(%.2f, %.2f) e B(%.2f, %.2f) é: %.2f\n",
        p.x, p.y, q.x, q.y, distancia);

    return 0;
}
