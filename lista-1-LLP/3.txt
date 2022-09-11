#include <stdio.h>
#include <stdlib.h>
int p (int par){
    return (par % 2 == 0);
}

int main()
{
    int valor;
  printf("Digite um valor\n"); scanf ("%d",&valor);
 
 if (p (valor))
  printf("é par");
 else
 printf("é impar");
 
 return 0; }
