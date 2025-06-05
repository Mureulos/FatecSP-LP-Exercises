#include <stdio.h>

int main()
{
    char caracter;
    printf("Informe o caracter: ");
    scanf("%c", &caracter);
    
    printf("\nASCII em octal: %o\n", caracter);
    printf("ASCII em decimal: %d\n", caracter);
    printf("ASCII em hexadecimal: %x\n", caracter);

    return 0;
}