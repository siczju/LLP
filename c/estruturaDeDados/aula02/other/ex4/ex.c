#include <stdio.h>
#include <malloc.h>
#define alturaMaxima 225

typedef struct
{
    int peso;
    int altura;
} pesoAltura;

void main()
{

    pesoAltura *pessoa2 = (pesoAltura *) malloc(sizeof(pesoAltura));
    pessoa2->peso = 80;
    pessoa2->altura = 185;

    printf("Peso: %i, Altura: %i. ", pessoa2->peso, pessoa2->altura);

    if (pessoa2->altura > alturaMaxima)
        printf("Altura acima da media.\n");
    else
        printf("Altura abaixo da media\n");
}