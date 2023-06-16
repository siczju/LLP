// preenchendo struct com dados dado pelo usuário.

#include <stdio.h>

typedef struct {
    int idade;
    char sexo;
    char nome[100];
}Pessoa; 

int main(){
    
    Pessoa pessoa;

    printf("\nType your name: ");
    fgets(pessoa.nome, 100, stdin);

    printf("Type your age: ");
    scanf("%d",&pessoa.idade);

    printf("Type your sex(f / m): ");
    scanf("%c",&pessoa.sexo);
    scanf("%c");

    printf("\nnome: %s sexo: %c\nidade: %d\n",pessoa.nome, pessoa.sexo, pessoa.idade);

}
