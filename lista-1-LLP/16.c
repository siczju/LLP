#include <stdio.h>
#include <stdlib.h>

int main()
{

int n = 0;
int p = 0;
int i = 0;

printf("digite um numero inteiro ou 0 para finalizar\n");
    scanf("%i",&n);
    
while (n>0){

    if (n % 2 == 0)
    p += n;
    else 
    i += n; 
    
    printf("digite um numero inteiro ou 0 para finalizar\n");
    scanf("%i",&n);
    
    
}


printf("O somatorio de numeros pares e %d\n ",p);
printf("O somatorio de numeros ímpares e %d\n",i); 
p > i ? printf("o maior somatorio e par %d",p) : printf("O maior somatorio e impar, %d",i);
/* if (p > i)
printf("o maior somatorio e par %d",p);
 else
printf("O maior somatorio e impar, %d",i); 
*/

    
    return 0;
}