/**
   Faça um algoritmo para ler um número que é um código de usuário.

Caso este código seja diferente de um código armazenado internamente no algoritmo (igual a 1234) deve ser apresentada a mensagem "Usuário inválido!" e o sistema será encerrado.

Caso o código seja correto, deve ser lido outro valor que é a senha.

Se a senha estiver correta (a certa é 9999), deve ser exibida a mensagem "Acesso permitido".

Se a senha estiver incorreta deve ser exibida a mensagem "Senha incorreta", e também uma mensagem com as seguintes opções:

1 - tentar novamente
0 - encerrar sistema
*/

#include <stdio.h>
#include <stdlib.h>

void AskAndVerifyPassword(){

    int password, userpassword = 9999, op;
    do{
     printf("type your password: "); scanf("%d",&password);
     if(password == userpassword){
     printf("allowed access!");
     op = 0;}
     else{
     printf("invalid Password!\n\n 1 - try again\n 0 - stop system\n");
     scanf("%d",&op); 
     }
     
    }while(op != 0);
}

int AskTheUserNumber(){

    int usercode;
    printf("press your user number: ");
    scanf("%d",&usercode);
    return usercode;
}

int main(){

  int usercode, code = 1234;

  usercode = AskTheUserNumber();
  if(usercode == code)
  AskAndVerifyPassword();
  else
    printf("invalid user!");
}