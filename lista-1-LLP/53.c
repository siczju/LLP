#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define ISSN_OK 0
#define ERROR -1
 
int calc_dv(char issn[]){
//             conta 1
 
 int i, soma = 0, peso = 8, dv = 0, resto = 0, quociente = 0;
 
    for(i = 0; i < 8; i++)
    soma += ((issn[i] - 48) * peso--); soma + (issn[7] == 'X') ? 10 : 0;
 
//            conta 2
 
resto = soma % 11;
return dv = (resto == 0) ? 0 : 11 - resto;
 
}
//           format code
void formatar_issn(char issn[],char format[]){
    strncpy(format,issn,4);
    format[4] = '-';
    strncpy(&format[5],&issn[4],4);
}
//        generate code
void gerar_issn(char issn[]){
int i;
for(i = 0; i < 7; i++)
    issn[i] = (rand() % 10) + 48;
 
 
issn[7] = '0';
issn[7] = calc_dv(issn) + 48;
issn[8] = '\0';
 
}
//     validate code
int validar_issn(char issn[]){
    int dv,dv2;
 
    dv2 = issn[7] - 48;
    dv = calc_dv(issn);
    if(dv == 0)
    return ISSN_OK;
  
    if(dv != dv2)return ERROR;
        else return ISSN_OK;
}
 
int main(){
    char issn[9] = {0}, format[10] = {0}; int res = 0;
    issn[8] = '\0';
 
//     form 1:
// úsuario digita
//printf("|------------------------------------------------|\n"); 
  // printf("\t     Digite o ISSN: ");
   // scanf("%s",issn); //ou gets(issn); 
 
//   form 2:
 // atribui um valor diretamente a variavel
 //printf("\t    ISSN for STRCPY: \n");
   //strcpy(issn,"67234445"); 
 
// form 3:
// função que gera o issn: gerar_issn
//   printf("\t  Generate ISSN: ");
  srand(time (NULL));
  gerar_issn(issn);
 
  res = validar_issn(issn);
printf("|------------------------------------------------|\n"); 
if(res == ERROR)
printf("| | < - - - - >  ERROR No ISSN!  < - - - - >   | |\n");
else{
formatar_issn(issn,format);
printf("| <- -> O ISSN: [%s], Esta valido! <- ->  |\n",format);
}
printf("|------------------------------------------------|\n"); 
}