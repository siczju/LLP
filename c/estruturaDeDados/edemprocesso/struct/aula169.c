// usar struct dentro de outra struct

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

int main(){
    
    Pessoa pessoa;

    printf("Type your date of birth (dd/mm/aaaa): ");
    scanf("%d%d%d", &pessoa.dataNascimento.dia, &pessoa.dataNascimento.mes, &pessoa.dataNascimento.ano);

    printf("Date Birth: %d/%d/%d\n", pessoa.dataNascimento.dia, pessoa.dataNascimento.mes, pessoa.dataNascimento.ano);

}