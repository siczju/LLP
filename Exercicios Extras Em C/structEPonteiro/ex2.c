// struct e ponteiros
// ler e exibir informações de um estudante 

// criação da váriavel de estudantes
// leitura de dados do usúario
// exibir dados coletados

#include <stdio.h>

int main()
{

// tipo de dado definido pelo usuário
  struct estudante{
    int nMatricula;
    char nome[30];
    float vMensalidade;
    char dataBacharelado[30];
  };
  
  // declara variavel do tipo struct estudante e do tipo ponteiro de struct estudante
  struct estudante stud1, *ptr_stud1;
   
  ptr_stud1 = &stud1; // & esta para acessar o endereço (&stud1)
  
  printf("\n Entre matricula: "); scanf("%d",&ptr_stud1->nMatricula);
  printf("\n Entre nome: "); scanf("%s",&ptr_stud1->nome);
  printf("\n Entre mensalidade: "); scanf("%f",&ptr_stud1->vMensalidade);
  printf("\n Entre data do bacharelado: "); scanf("%s",&ptr_stud1->dataBacharelado);
  
  printf("\n********CADASTRO DO ESTUDANTE********\n");
  printf(" Num. Matricula = %d\n",ptr_stud1->nMatricula);
  printf(" Nome = %s\n",ptr_stud1->nome);
  printf(" Valor Mensalidade = %6.2f\n",ptr_stud1->vMensalidade);
  printf(" Data do Bacharelado = %s\n",ptr_stud1->dataBacharelado);
  
    return 0;
}
