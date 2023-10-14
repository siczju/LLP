 #include <stdio.h>

 void main(){
    int a;

    printf("sizeof(a) = %ld bytes\n\n", sizeof(a));

    printf("sizeof(int) = %ld bytes\n", sizeof(int));
    printf("sizeof(short) = %ld bytes\n", sizeof(short));
    printf("sizeof(long) = %ld bytes\n", sizeof(long));
    printf("sizeof(unsigned long) = %ld bytes\n", sizeof(unsigned long));
    printf("sizeof(float) = %ld bytes\n", sizeof(float));
    printf("sizeof(double) = %ld bytes\n\n", sizeof(double));

    printf("sizeof(void *) = %ld bytes\n", sizeof(void *));
    printf("sizeof(int *) = %ld bytes\n", sizeof(int *));
    printf("sizeof(int **) = %ld bytes\n", sizeof(int **));
    printf("sizeof(int ***) = %ld bytes\n", sizeof(int ***));
    printf("sizeof(float *) = %ld bytes\n", sizeof(float *));

 }

 // ponteiro indenpendente do tipo de variavel que ele aponta, ele sempre guarda o endereço de memória e o endereço de memória sempre terá o mesmo tamanho ou seja todos iguais = 4/8 bytes