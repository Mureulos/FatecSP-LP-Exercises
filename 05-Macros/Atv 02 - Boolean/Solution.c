#include <stdio.h>
#include <stdbool.h>

#define bool(x) ((x)? "Verdadeiro": "Falso")
#define not !
#define and &&
#define or ||

int main() {
    printf("%s \n", bool(not false));
    printf("%s \n", bool(false and true));
    printf("%s \n", bool(true or false));
    
    return 0;
}