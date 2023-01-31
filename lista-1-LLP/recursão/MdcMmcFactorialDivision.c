#include <stdio.h>

long mdc(long a,long b)
{
    if(b == 0) return a;
    return mdc(b,a % b);
}
long mmc(int a,int b)
{
    if(b == 0) return a;
    return (a * b) / ( mdc(a,b) ); 
}      

long factorial(long a){
    if(a == 1) return 1;
    return a * factorial(a - 1);
}

long division(long a, long b){
    if(a >= b) return division(a - b, b) + 1;
    return 0;
}

int main()
{
   long x = 12, y = 4;
   printf(" division: %ld\n factorial: %ld\n mdc: %ld\n mmc: %ld\n", division(x,y), factorial(y), mdc(x,y), mmc(x,y));
}


