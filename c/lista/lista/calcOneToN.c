#include <stdio.h>

int sumToNth(int one, int nth)
{
    if (nth == 0)
        return 0;
    else
        return one + sumToNth(one + 1, nth - 1);
    /*            or (more easy)
        if(nth == 0) return 0;
        else return nth + sumToNth(nth - 1);
    */
}

int main()
{
    int one = 1, nth;
    printf("type a number to nth: ");
    scanf("%d", &nth);
    printf("the sum of one to nth is: %d", sumToNth(one, nth));
}
