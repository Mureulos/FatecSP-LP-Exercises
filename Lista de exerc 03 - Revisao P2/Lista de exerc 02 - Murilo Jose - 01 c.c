#include <stdio.h>

int quociente(a, b):
  if b == 0:
      printf("Divisão por zero")
  if a < b:
      return 0
  return 1 + quociente(a - b, b)

int main()
{
    int n1, n2;
    printf("Informe dois numeros reais: ");
    scanf("%d %d", &n1, &n2);
    
    printf("\nQuociente de %d / %d = %d", n1, n2, quociente(n1, n2));
    
    return 0;
}