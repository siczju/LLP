/**
 * Faça um algoritmo para ler um número que é um código de usuário.

Caso este código seja diferente de um código armazenado internamente no algoritmo (igual a 1234) deve ser apresentada a mensagem "Usuário inválido!" e o sistema será encerrado.

Caso o código seja correto, deve ser lido outro valor que é a senha.

Se a senha estiver correta (a certa é 9999), deve ser exibida a mensagem "Acesso permitido".

Se a senha estiver incorreta deve ser exibida a mensagem "Senha incorreta", e também uma mensagem com as seguintes opções:

1 - tentar novamente
0 - encerrar sistema
*/

#include <stdio.h>
#include <stdlib.h>

int password(){

    int password = 9999, code = 1234, usercode, userpassword, choice, op;

    printf("Press your user number\n");
    scanf("%d",&usercode);

    if(usercode == code)
    do{
     printf("type your password: "); scanf("%d",&userpassword);
     if(password == userpassword){
     printf("allowed access!");
     op = 0;}
     else{
     printf("invalid Password!\n 1 - try again\n 0 - stop system\n");
     scanf("%d",&op); 
     }
     
    }while(op != 0);
    else
    printf("invalid user!");
}

int main(){

password();

}