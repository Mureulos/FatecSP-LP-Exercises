#include <stdio.h>

void binario(int num) {
  if (num < 2) { 
    printf("%d", num);
  } else {
    binario(num / 2);
    printf("%d", num % 2);
  }
}

int main()
{
    int n;
    printf("Informe um valor: ");
    scanf("%d", &n);
    
    printf("\n%d = %", n);
    binario(n);
    
    return 0;
}