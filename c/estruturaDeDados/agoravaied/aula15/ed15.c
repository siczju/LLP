//  Tipos de Alocação de Memória

//  Alocação Estática:

// Na memória ram a gente tem dois tipos de região de memória (stack(pilha) e heap), o tamanho da memória stack é muito menor do que o
// heap (sizeof (stack) < sizeof (heap))
// todas variaveis são armazenadas na memória stack, ainda não usamos a heap só a stack 
// quando o programa começa o pc aloca tudo e quando termina o programa ele desaloca pra você, se não desalocasse ia ficar lixo na memória
// ou seja a liberação de memória é feita automaticamente pelo compilador

//  Alocação Dinâmica:

// na alocação dinâmica são alocadas na memória heap(free store)
// na dinâmica enquanto na estática ela apaga(desaloca) sozinha, aqui você pode alocar, desalocar, mudar região quando você quiser 
// ou seja o espaço é alocado dinâmicamente(a mão) durante a execução do programa podendo ser criada ou eliminada durante a execução do prog
// ocupando espaço na memória apenas enquanto está sendo utilizada
// os dados so são desalocados quando o programa realmente termina ou seja durante o programa a função não desalocará sozinha so se a gente
// fizer na mão diferente da estática

// para alocar a gente usará duas funções para isso (malloc(memory allocation) e calloc), e para liberar a memória usamos o free(variavel)

// Porque usar memória dinâmica? 
// -> aloca em tempo de execução(ou seja aloco/desaloco quando preciso)
// -> utilizada quando não se sabe ao certo quanto de memória será necessário, assim o tamanho de memória necessário é determinado conforme... 
// necessidade
// -> dessa forma evita-se desperdício de memória

// Funções Dinâmicas:
// malloc() -> aloca um bloco de bytes consecutivos na heap e devolve o endereço desse bloco
// tipo* v = (tipo*) malloc(n* sizeof(tipo)); -> "n" -> é q qtd de elementos que eu quero alocar multiplicados pelos tipos do elementos que
// eu quero alocar
// supnha que desejamos alocar dinâmicamente (heap) um vetor de 5 floats (float a[5];)
// -> ex:  float* a = (float*) malloc(n * sizeof(float)); -> está pedindo pra alocar na memória 5 vezes 4 bytes(tamanho do float) ai ficará:
/*

      H220  
      H216 [###] 4 /
      H212 [###] 3 /
      H208 [###] 2 / - -> 5 . 4 -> 20 bytes
      H204 [###] 1 /
      H200 [###] 0 / -> endereço base

*/
// ai o malloc aloca essa qtd de bytes na memória heap e retorna o endereço base dessa região alocada (H200) 
// ai o "a" nosso que está ali em cima como exemplo( ex: ) é um ponteiro para um float apontará para a região de memória que o malloc 
// retornou que é o endereço base, as caixinhas ali que eu fiz na mão (H200 [###] 0)

#include <stdio.h>

void main(){

    // stack (estático)

    int a;
    float b;
    char c;
    int a[10];

    // heap (dinâmico)

    int *a = (int *) malloc(10 * sizeof(int));
    float *b = (float *) calloc(6, sizeof(float));
    free (a);
    free(b);

}