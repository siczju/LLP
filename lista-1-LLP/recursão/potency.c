#include <stdio.h>

int potency(int n, int elevated)
{
    if (elevated == 0)
        return 1;
    else
        return n * potency(n, elevated - 1);
}

int main()
{
    int n, elevated;
    printf("Type two values to base and to exponent: ");
    scanf("%d%d", &n, &elevated);
    printf("\nresult of %d elevated to %d is: %d\n", n, elevated, potency(n, elevated));
}
