// ponteiro -> variavel que guarda o endereço de uma outra variavel
// todo ponteiro ocupa 8 bytes de memórias
// int *p1 = NULL; -> quando não apontar p nenhum lugar  
#include <stdio.h>
#include <stdlib.h>

int main(){

int a = 10;
int *p1 = NULL;
int *p2;

p1 = &a; // está apontando pra região de memória de 'a' ou seja está guardando o endereço dele
p2 = p1; // o p2 vai guardar o endereço de memoria que o p1 está guardando, estão apontando pro mesmo lugar agora, pro 'a'
*p2 = 4; // está atribuindo 4 pro conteúdo de memória que p2 está armazenando que é o de 'a', então atribui 4 pro 'a'

    // &a = 5000, a = 4
    // &p1 = 5004, p1 = 5000, *p1 = 4
    // &p2 = 5012, p2 = 5000, *p2  = 4

return 0;
}