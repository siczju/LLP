#include <stdio.h>

int sumArray(int array[], int index)
{
    if (index == 0)
        return 0;
    else
        return array[index - 1] + sumArray(array, index - 1);
}

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("sum of array: %d", sumArray(array, 10));
}
