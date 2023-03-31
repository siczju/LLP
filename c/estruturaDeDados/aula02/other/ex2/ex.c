#include <stdio.h>

void main(){
    int x = 25;
    int* y = x;
    *y = 30;
    printf("Valor atual de x: %i\n",&x);
}