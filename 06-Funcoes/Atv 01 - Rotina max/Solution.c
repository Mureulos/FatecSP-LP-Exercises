#include <stdio.h>

double max (double a, double b) {
   if (a > b)
        return a;
   return b;
}

int main() {
    double n1, n2, y;
    
    printf("Digite dois números: \n");
    scanf("%lf %lf", &n1, &n2);

    y = max(n1, n2);
    
    printf("O maior entre os dois números é: %0.lf", y);

    return 0;
}