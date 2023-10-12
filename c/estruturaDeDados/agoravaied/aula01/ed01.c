// toda variável está associada a um: nome, tipo, valor e endereço.
// todo tipo de dados tem um tamanho necessário pra ser alocado na memória.
    // int -> 4 bytes
#include <stdio.h>

int main(){

int a = 10;
int b, c;

printf("&a = %p, a = %d\n", &a, a);
printf("&b = %p, b = %d\n", &b, b);
printf("&c = %p, c = %d\n", &c, c);

b = 20;
c = a + b;

printf("&a = %p, a = %d\n", &a, a);
printf("&b = %p, b = %d\n", &b, b);
printf("&c = %p, c = %d\n", &c, c);

// para mostrar endereço -> %p

/*

 "a" está alocado no endereço 3020, como o "b" está depois do "a" e precisa de 4 bytes de memória também, será alocado no endereço...
3020 + 4 -> 3024, a mesma coisa com o "c", 3024 + 4

     ou seja
     3020 [10] a
     &a = 3020; a = 10
     3024 [20] b
     &b = 3024; b = 20
     3028 [30] c
     &c = 3028; c = 30

-> como o "a" precisa de 4 bytes, ela pegará o endereço 3020, 3021, 3022 e 2023
-> quando não definir valor a variável terá lixo de memória no endereço



*/
return 0;
}