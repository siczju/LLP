// struct -> como criar novos tipos de dados em C com typedef struct

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int idade;
    char sexo;
    char nome[100];
}Pessoa;  

struct Pessoa2{ // muda na declaração da variável
    int idade;
    char sexo;
    char nome[100];
};

int main(){
    // int nome; -> tipo primitivo
    Pessoa pessoa1; // variavel do tipo pessoa chamada nome
    struct Pessoa2  pessoa2;

    pessoa1.idade = 35; 
    pessoa1.sexo = 'f';
    strcpy(pessoa1.nome, "Maria");

    printf("nome: %s\nsexo: %c\nidade: %d\n",pessoa1.nome, pessoa1.sexo, pessoa1.idade);
}
