// struct como parametro

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    int dia, mes, ano;
}DataNascimento;

typedef struct{ 
    DataNascimento dataNascimento; // struct dentro de outra struct
    int idade; // (dia, mes, ano)
    char sexo;
    char nome[100];
}Pessoa;

void imprimirPessoa(Pessoa p){
    printf("\n\tNome: %s\tIdade: %d\n\tSexo: %c\n\tDate Birth: %d/%d/%d\n",p.nome,p.idade,p.sexo,p.dataNascimento.dia,
    p.dataNascimento.mes, p.dataNascimento.ano);
}

int main(){
    
    Pessoa pessoa;

    printf("\nType your name: ");
    fgets(pessoa.nome, 100, stdin);

    printf("Type your age: ");
    scanf("%d",&pessoa.idade);

    printf("Type your sex(f / m): ");
    scanf("%c",&pessoa.sexo);
    scanf("%c");

    printf("Type your date of birth (dd/mm/aaaa): ");
    scanf("%d%d%d", &pessoa.dataNascimento.dia, &pessoa.dataNascimento.mes, &pessoa.dataNascimento.ano);

    imprimirPessoa(pessoa);
}