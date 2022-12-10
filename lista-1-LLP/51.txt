#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
 
#define CNPJ_OK 0 // caso retorne esse valor o CNPJ é verdadeiro
#define DV -1 // caso retorne esse valor o DV será inválido
#define DV2 -2 // caso retorne esse valor o DV2 será inválido
 
int calc_cnpj(char cnpj[], int total) {
 
    int soma = 0, i, peso, dv, posicao;
    peso = (total != 12) ? 6 : 5;
    
    for(i = 0; i < total; i++) { 
        soma += ((cnpj[i] - 48) * peso--);  
        posicao = (total == 12) ? 3 : 4; 
    if(i == posicao) peso = 9; else continue;
    }
    dv = (11) - soma % 11; 
    // se for = 10,11 ou menor que 2 é igual a 0, se não retorna 11 - o dv
    if(dv == 10 || dv == 11 || dv <= 2) return 0;
    else return dv;
}
 
int gerar_cnpj(char cnpj[]) {
 
    for(int i = 0; i < 14; i++) {
        cnpj[i] = (rand() % 10) + 48;   
 
    cnpj[12] = cnpj[13] = '0';
    // gerando DVS
    cnpj[12] = calc_cnpj(cnpj, 12) + 48;
    cnpj[13] = calc_cnpj(cnpj, 13) + 48;
    // NULO
    cnpj[14] = '\0';
    // valores padrões do cnpj /0001-
    if(i >= 8 && i <= 10)
        cnpj[i] = '0';
    if(i == 11)
        cnpj[i] = '1';
    }
}
 
void formatar_cnpj(char cnpj[], char format[]) { 
 
   strncpy(format, cnpj, 2);//           -|             
   format[2] = '.';         //            |  
                            //            | XX. XXX.
   strncpy(&format[3], &cnpj[2], 3);//    |
   format[6] = '.';//                    -|
 
   strncpy(&format[7], &cnpj[5], 3);//   -|
   format[10] = '/';//                    |
//                                        |
   strncpy(&format[11], &cnpj[8], 4);//   |  XXX/XXXX-XX
   format[15] = '-';//                    |
   strncpy(&format[16], &cnpj[12], 2);// -|
}
 
int validar_cnpj(char cnpj[]) { 
 
    int i, pos, dv, dv2;
 
    for(i = 1; i <= 2; i++) { 
//            Vendo qual DV tem que validar
        int total = (i == 1) ? strlen(cnpj) - 2 : strlen(cnpj) - 1; 
//            Calcula o DV
        dv = calc_cnpj(cnpj, total); 
//            Analisa qual DV Ele Calculou E adiciona no "dv2"
        pos = (i == 1) ? strlen(cnpj) - 2 : strlen(cnpj) - 1; 
        dv2 = cnpj[pos] - 48;  
//            Compara os DVS
        if(dv != dv2){ 
            if(i == 1)  
                return DV;
            else 
                return DV2;
        }
    }
//            Se tiver tudo bem, retorna o CNPJ_OK
    return CNPJ_OK;
}
 
int main() {
 
    char cnpj[15], format[19] = { 0 };
    int resultado;
 //   form 1:
// úsuario digita
//printf("|---------------------------------------------|\n");
  //  printf("\t   Digite o CNPJ: ");
 //   scanf("%s",cnpj); // ou gets(cnpj) 
 
//   form 2:
 // atribui um valor diretamente a variavel
// printf("      CNPJ Atribuido Pelo STRCPY\n");
 // strcpy(cnpj,"86646570000179"); 
 
// form 3:
// função que gera o cnpj: gerar_cnpj
 //
 //printf("\t   o CNPJ foi Gerado! \n"); -
  srand(time(NULL));                     
    gerar_cnpj(cnpj);
    
    resultado = validar_cnpj(cnpj);
        printf("|---------------------------------------------|\n");
if(resultado == DV)
        printf("| | < - - - - >  ERROR No DV1!  < - - - - > | |\n"); 
else 
    if(resultado == DV2)
        printf("| | < - - - - >  ERROR No DV2!  < - - - - > | |\n"); 
else {            
        formatar_cnpj(cnpj,format);
        printf("| O CNPJ: [%s], Esta valido!  |\n",format);
        }
        printf("|---------------------------------------------|\n");
return 0;
}