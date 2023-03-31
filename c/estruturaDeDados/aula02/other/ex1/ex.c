//

#include <stdio.h>
#define alturaMaxima 225

typedef struct
{
    int peso;
    int altura;
} pesoAltura;

void main()
{

    //    typedef int chave; // muda o nome da variavel (typedef muda int->chave)

    pesoAltura pessoa1;
    pessoa1.peso = 80;
    pessoa1.altura = 185;
    printf("Peso: %i, Altura: %i. ", pessoa1.peso, pessoa1.altura);
    
   if(pessoa1.altura>alturaMaxima) 
   printf("Altura acima da media.\n");
   else 
   printf("Altura abaixo da media\n");

}