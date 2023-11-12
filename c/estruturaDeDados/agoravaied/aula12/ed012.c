// ao passar um ponteiro para uma função caso seja só para leitura (read only) podemos evitar uma alteração de seu valor acidentalmente
// dentro da função apenas adicionando a palavra const; (const int *vector) -> boa prática de programação

#include <stdio.h>

void troca(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

void main(){

    int a = 10, b = 20;
    
    printf("%d\n%d\n\n",a,b);

    troca(&a, &b);

    printf("%d\n%d",a,b);

}