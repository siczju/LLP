// vetores e alocalção estática e dinâmica
// vetores -> é a forma mais simples de estruturarmos uma lista de elementos
// int v[10]; -> vetor com 10 elementos, resservamos um espaço continuo para armazenar os 10 valores inteiros. -> se cada int ocupa 4 bytes..
// ...    a declaração reserva um espaço de memória de 40 bytes

/*

    Endereço S100 | Lixo de memória [###] | Indice do vetor v[9]

    S140
    S136 [###] v[9]
    S132 [###] v[8]
    S128 [###] v[7]
    S124 [###] v[6]
    S120 [###] v[5]
    S116 [###] v[4]
    S112 [###] v[3]
    S108 [###] v[2]
    S104 [###] v[1]
    S100 [###] v[0]
    &v[0]

    v[4] = *(S116) = ### -> ou seja para acessar o indice 4 ele vai no endereço S116 e pega o * conteudo desse endereço

*/


#include <stdio.h>

void main(){
    int i;
    int v[5];

    for(i = 0; i < 5; i++)
        scanf("%d", &v[i]); // scanf ->  função que você passa o endereço de memória da onde você quer alocar um valor lido pelo teclado

     for(i = 0; i < 5; i++)
        printf("&v[%d] = %p, v[%d] = *(%p) = %d\n", i, &v[i], i, &v[i], v[i]);
    
}