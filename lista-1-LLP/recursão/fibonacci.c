#include <stdio.h>

int fibonacci(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    printf("Type a fibonacci value: ");
    scanf("%d", &n);
    printf(" the %d term is: %d", n, fibonacci(n));
}
