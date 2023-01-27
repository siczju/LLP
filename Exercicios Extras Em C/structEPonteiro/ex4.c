#include <stdio.h>

void main(){

    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *px = &x;
    double *py = &y;
    char *pz = &z;

    double soma = *px + *py; // soma os valores
    printf("soma: %f\n",soma); 

    int *resultado = 6422272; // endereço de x
    printf("valor = %d\n", *resultado); // mostra o valor da variavel x

    printf("Endereco x = %i - Valor x = %i", px, *px); // para ver o valor coloca o "*", antes do ponteiro
    printf("\nEndereco y = %i - Valor x = %.2f", py, *py); 
    printf("\nEndereco z = %i - Valor x = %c", pz, *pz); 
}