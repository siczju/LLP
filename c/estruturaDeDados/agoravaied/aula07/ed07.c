#include <stdio.h>

void main(){

    int a = 10;
    int *p1 = &a; // p1 é um ponteiro para inteiro
    int **p2 = &p1; // p2 aponta pra variaveis inteiros de ponteiros, ou seja guarda endereço de memoria de uma variavel que
                    // é um ponteiro para um inteiro

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
    printf("&p2 = %p, p2 = %p, *p2 = %p, **p2 = %d\n\n", &p2, p2, *p2, **p2);
    // endereço, endereço que o ponteiro guarda, o conteudo do ponteiro, acessar o conteudo do conteudo do endereço de memoria (a)

    **p2 = 99; 

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
    printf("&p2 = %p, p2 = %p, *p2 = %p, **p2 = %d\n\n", &p2, p2, *p2, **p2);

    // *p1 = *(&a) = 10

    // * -> conteudo | ** -> conteudo do conteudo
    // 5012 [5004] p2
    // 5004 [5000] p1
    // 5000 [ 10 ] a
    // **p2 = **(5004) = *(5000) = 10
    // **p2 = 99;
    // **p2 = **(5004) = *(5000) = 99

    float z = 2.5;
    float *fp;

    fp = &z;

    printf("*&z = %f\n", *&z);
    printf("*fp = %f\n", *fp);
    printf("**&fp = %f\n", ** &fp);

}