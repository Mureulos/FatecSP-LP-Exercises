#include <stdio.h>

void invertido(int num) {
  if (num < 10) { 
    printf("%d", num);
  } else {
    printf("%d", num % 10);
    invertido(num / 10);
  }
}

int main()
{
    int n;
    printf("Informe um valor: ");
    scanf("%d", &n);
    
    printf("\n%d = %", n);
    invertido(n);
    
    return 0;
}