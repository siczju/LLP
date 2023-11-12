//      REFERÊNCIA DE MEMÓRIA -> parâmetro por referência
// -> é passado um ponteiro para função possibilitando alterar uma variável externa a uma função
// passagem de parâmetros por referência = passar uma cópia de um endereço de memória pra um parâmetro

#include <stdio.h>

void soma(int x, int y, int *z){ // o "z" está apontando pra região de memória de "c". -> z = &c
    *z = x + y;
}

void soma_e_sub_mult_div(int x, int y, int *soma, int *sub, int *mult, float *div){
    *soma = x + y;
    *sub = x - y;
    *mult = x * y;
    *div = x / y;
}

void main(){
    int a = 10, b = 20, som, sub, mult;
    float div;

    //  10 - 20 - endereço
    soma(a, b, &som); // c = 30 depois da função executar
    printf(" a = %d\n b = %d\n soma = %d\n\n", a, b, som);
    
    soma_e_sub_mult_div(a, b, &som, &sub, &mult, &div);
    printf(" a = %d\n b = %d\n soma = %d\n subtracao = %d\n multiplicacao = %d\n divisao = %.2f\n ", a, b, som, sub, mult, div);

}