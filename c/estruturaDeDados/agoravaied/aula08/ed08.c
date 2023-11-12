#include <stdio.h>

int main(){

    int a, b, *p1, *p2;
    
    printf("&a = %p, &b = %p\n", &a, &b);

    a = 4, b = 3;
    printf("a = %d, b = %d, p1 = NULL, *p1 = NULL, p2 = NULL, *p2 = NULL \n", a, b);

    p1 = &a, p2 = p1;
    printf("a = %d, b = %d, p1 = %p, *p1 = %d, p2 = %p, *p2 = %d\n", a, b, p1, *p1, p2, *p2);

    *p2 = *p1 + 3; b = b * (*p1); (*p2)++;
    printf("a = %d, b = %d, p1 = %p, *p1 = %d, p2 = %p, *p2 = %d\n", a, b, p1, *p1, p2, *p2);

    p1 = &b;
    printf("a = %d, b = %d, p1 = %p, *p1 = %d, p2 = %p, *p2 = %d\n", a, b, p1, *p1, p2, *p2);

    printf("%d %d\n", *p1, *p2);
    printf("%d %d\n", a, b);

    return 0;
}
