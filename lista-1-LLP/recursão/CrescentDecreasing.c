#include <stdio.h>

long crescent(long number)
{
    if (number == 0)
        printf(" %ld ", number);
    else
    {
        crescent(number - 1);
        printf(" %ld ", number);
    }
}

long decreasing(long number)
{
    if (number == 0)
        printf(" %ld ", number);
    else
    {
        printf(" %ld ", number);
        decreasing(number - 1);
    }
}

int main()
{

    long number;
    printf("Type a number higher of 0: ");
    scanf("%ld", &number);

    crescent(number);
    printf("\n");
    decreasing(number);
}