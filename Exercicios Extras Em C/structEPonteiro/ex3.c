#include <stdio.h>

int main()
{

    int x;  // armazenamos x na memória
    x = 10; // armazenei 10 no endereço de x

    printf("%d\n", x); // vai mostrar o valor da variavel

    //      para criar um ponteiro:

    int *ponteiro; // ele pode ter outro tipo como float
    ponteiro = &x; // acesso o endereço da memória

    printf("%i\n", ponteiro);  // mostra o endereço
    printf("%i\n", *ponteiro); // mostra o valor do endereço

    //      para mostrar o endereço:

    printf("%i\n", &x); // coloca o "&" antes da variavel para mostrar o endereço

    //   apontamento no endereço de memoria

    ponteiro = &x; // vai apontar no endereço de memoria da variavel x
    int y = 20;    //
    *ponteiro = y; // o valor do ponteiro (que vai ser mandado pro endereço do x) vai ser igual a y

    printf("%d %d", x, y );

        return 0;
}
