#include <stdio.h>

void main(){

    int a = 10;
    int *p1 = &a; // p1 é um ponteiro para inteiro
    int **p2 = &p1; // p2 aponta pra variaveis inteiros de ponteiros, ou seja guarda endereço de memoria de uma variavel que é um ponteiro para um inteiro

    // *p1 = *(&a) = 10

    **p2 = 99; 

    // * -> conteudo | ** -> conteudo do conteudo
    // **p2 = **(&p1) = *(&a) = 10
    // **p2 = 99;
    // **p2 = **(&p1) = *(&a) = 99
}