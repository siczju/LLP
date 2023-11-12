// Aritmética de Ponteiros
// ao declararmos int v[5]; -> o simbolo "v" é uma constante que representa o endereço inicial do vetor
// então sem indexação [], v aponta (guarda refêrencia) para o primeiro elemento do vetor
// &v = v = &v[0] -> é como se fosse um ponteiro, ele guarda o endereço do primeiro elemento do vetor

// v[0] = 10(valor aleatorio)
// v = &v[0]

// apontar para uma variavel -> armazena o endereço da variavel

/*

    v = &v[0] = S100
    (v + 1) = S104 -> v + 1 -> quer dizer que a partir do endereço v, que está armazenando o endereço de memória de uma variável de um dado 
    tipo, desloque pra mim, 1 vezes a quantidade de bytes desse tipo (nesse caso 4, por ser int), ou seja S100 + (1 x 4) = S104

    (v + 3) = S100 + (3 x 4) = S112 -> (qtde de deslocamento apartir do endereço somado VEZES numero de bits do tipo de variavel)
    v[3] = *(v + 3) = *(S116) = 16

    S100 -> endereço base do vetor

    S120 [###] v[5]
    S116 [###] v[4]
    S112 [###] v[3]
    S108 [###] v[2]
    S104 [###] v[1]
    S100 [###] v[0]


    -> se eu quiser acessar o elemento que está no indice 4 ele pega o endereço base (exemplo: S100), ai ele vai pegar o conteudo de memoria
    que está no endereço base (endereço do primeiro elemento) + 4 deslocamentos de inteiros ou seja ( S100 +  (4 x 4)) 
    

*/

#include <stdio.h>

void main(){

    int v[5] = {10, 5, 4, 16, 1};

    printf("&v = %p, v = %p\n\n", &v, v);

    for(int i = 0; i < 5; i++){
        printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);
        printf("(v + %d) =  %p, *(v + %d) = %d\n\n", i, (v + i), i, *(v + i));
    }

}