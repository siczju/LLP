#include <stdio.h>

int main(void){
    
    void testeVariavel(int x);
    void testePonteiro(int *pX);
    int teste = 1;
    int *pTeste = &teste;

    testeVariavel(teste);
    testePonteiro(pTeste);

    printf("%i\n",teste);

}

void testeVariavel(int x){
    ++x;
}
void testePonteiro(int *pX){
    ++*pX;
}
