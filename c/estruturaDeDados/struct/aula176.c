// como construir tipo eletronico com typedef struct?

// matriz de string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{ 
    char tipo[100];
    char marca[50];
    char modelo[25];
    char energia;
    char descricao[500];
    int quantidade;
    int codigo;
}Eletronico;

void imprimirEletronico(Eletronico e){
    printf("\ttipo: %s",e.tipo);
    printf("\tMarca: %s",e.marca);
    printf("\tModelo: %s",e.modelo);
    printf("\tenergia: %c \tquantidade: %d\n",e.energia, e.quantidade);
    printf("\tDescricao: %s", e.descricao);
}

Eletronico lerEletronico(){
    Eletronico e;
    
    printf("Type the type: ");
    fgets(e.tipo, 100, stdin);
    printf("Marca: ");
    fgets(e.marca, 50, stdin);
    printf("Modelo: ");
    fgets(e.modelo, 25, stdin);
    printf("Energia: ");
    scanf(" %c", &e.energia);

    scanf("%c");
    printf("Descricao: ");
    fgets(e.descricao, 500, stdin);
    printf("Quantidade e codigo: ");
    scanf("%d%d",&e.quantidade, &e.codigo);

    return e;
}

int main(){
    
    Eletronico e; // vetor de struct
    
     
    e = lerEletronico();
    imprimirEletronico(e);
}