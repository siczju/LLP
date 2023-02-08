#include <stdio.h>
#include <time.h>

int fibonacciRecursive(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int fibonacciIterativo(int n)
{
    int a = 0, b = 1, c, i = 2;

    if (n == 1)
        return a;
    else if (n == 2)
        return b;
    else
    {
        while (i < n)
        {
            c = a + b;
            a = b;
            b = c;
            i++;
        }
        return c;
    }
}

int main()
{
    int n =  45;

    time_t timeIni, timeFim;

    timeIni = time(NULL);
    printf("fibonacci iterative value: [%d] \n",fibonacciIterativo(n));
    timeFim = time(NULL);
    printf("\tTempo em segundos: %f\n\n", difftime(timeFim, timeIni));

    timeIni = time(NULL);
    printf("fibonacci recursive value: [%d] \n",fibonacciRecursive(n));
    timeFim = time(NULL);
    printf("\tTempo em segundos: %f\n\n", difftime(timeFim, timeIni));

}
