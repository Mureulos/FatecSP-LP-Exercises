#include <stdio.h>

int fatorial(int num) {
  if (num == 0) return 1;
  
  return ("%d", num * fatorial(num - 1));
}

int main()
{
    int n;
    printf("Informe um valor: ");
    scanf("%d", &n);
    
    printf("\nFatorial de %d = %d", n, fatorial(n));
    
    return 0;
}