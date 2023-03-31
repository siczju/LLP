#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
 
#define TRUE 1
#define DV 10
#define ERROR -1
#define ISBN_OK 0
 
//             all about isbn - 10      
 
//          calculate isbn 
int calc_isbn(char isbn[]){

int i,dv = 0, soma = 0, peso = 10; 
 
    for(i = 0; i < 9; i++){
        
        soma += (isbn[i] - 48) * peso--;
        
    }

    dv =  (11 - (soma % 11));
    if(dv == 10)
    return 88; //Retornar X caso DV 10

    isbn[9] = dv + 48;
    return dv + 48;

}
 
//       validate isbn
int validar_isbn(char isbn[]){
    int dv,dv2;
 
    dv2 = isbn[9];
    dv = calc_isbn(isbn);
    if(dv != dv2)return ERROR;
        else return ISBN_OK;
}
 
//          generate isbn
void gerar_isbn(char isbn[]){
    int i;
 
    for(i = 0; i < 9; i++)
        isbn[i] = (rand() % 9 ) + 48;
          
        isbn[9] = '0';
        isbn[9] = calc_isbn(isbn);
        isbn[10] = '\0';
}
 
//        format isbn 10
void formatar_isbn(char isbn[], char format[]){  //  85-7359-178-1\0
// 8573591781
    strncpy(format,isbn,2);//            -|
    format[2] = '-';//                    | 
//                                        | XX-XXXX-
    strncpy(&format[3],&isbn[2],4);//     |
    format[7] = '-';//                   -|
//                         
    strncpy(&format[8],&isbn[6],3);//    -|
    format[11] = '-';//                   |
//                                        | XXX-X\0
    strncpy(&format[12],&isbn[9],1);//    |   
    format[13] = '\0';//                 -|
}
 
//          all about isbn - 13
 
int calc_isbn13(char isbn13[]){
    int i, dv = 0, soma = 0;
 
   for(i = 0; i < strlen(isbn13) - 7; i++){
        
   soma += (isbn13[i + i] - 48) + 3 * (isbn13[i + i + 1] - 48);
   } dv = 10 - (soma % 10);
if(dv == 10)
    return 88;

    return dv + 48;
}
 
//          validate isbn 13
int validar_isbn13(char isbn13[]){
    int dv,dv2;
 
    dv2 = isbn13[12];
    dv = calc_isbn13(isbn13);
    if(dv == dv2) return ISBN_OK; else return ERROR;
}
 
//          format isbn 13
void formatar_isbn13(char isbn13[], char format13[]){  //  978-85-02-09376-8
    strncpy(format13,isbn13,3);//            -|
    format13[3] = '-';//                      |  
//                                            | XXX-X-
    strncpy(&format13[4],&isbn13[3],2);//     |
    format13[6] = '-';//               -|
//                                            
    strncpy(&format13[7],&isbn13[5],2);//    -|
    format13[9] = '-';//                      |    
//                                            | 
    strncpy(&format13[10],&isbn13[7],5);//   -| XXX-XXXXX-
    format13[15] = '-';//                     |  
//                                            |
    strncpy(&format13[16],&isbn13[12],1);//   | X\0
    format13[17] = '\0';//                   -|
}
 
//        generate isbn 13
void gerar_isbn13(char isbn13[]){
    int i;
 
    for(i = 0; i < 12; i++)
        isbn13[i] = (rand() % 9 ) + 48;
          
        isbn13[12] = '0';
        isbn13[12] = calc_isbn13(isbn13) ;
        isbn13[13] = '\0';
}
 
int main(){
 
    // ISBN 10
 
    char isbn[11] = {0}, format[14] = {0}; isbn[10] = '\0';
    int resultado = 0;
 
    // generate isbn 10
    srand(time (NULL));
   gerar_isbn(isbn);
 
    // ISBN 10 by strcpy
    //strcpy(isbn,"8573591781"); 
    
    //        user gives the ISBN
    //printf("\t     Digite o ISSN: ");
    //scanf("%s",isbn); //ou gets(isbn); 
    // EX: 85-7359-178-1
 
    resultado = validar_isbn(isbn);
        printf("|------------------------------------------------|\n"); 
    if(resultado == ISBN_OK){
        printf("| | < - - - - >  ISBN e Valido!   < - - - - >  | |\n");
    formatar_isbn(isbn,format);
        printf("| | < - - - - >   %s   < - - - - >  | |\n",format);
    }else{                
        printf("| | < - - - - >  ERROR No ISBN!  < - - - - >   | |\n");
    }   printf("|------------------------------------------------|\n"); 
 
//  ISBN 13
 
int resultado2;
char isbn13[14] = {0}, format13[18] = {0}; isbn13[13] = '\0';
 
// generate isbn 10
srand(time (NULL));
gerar_isbn13(isbn13);
 
// ISBN 13 by strcpy
//printf("|------------------------------------------------|\n");  
 //strcpy(isbn13,"9788502093768");
 
//        user gives the ISBN
 //printf("\t     Digite o ISBN13: ");
 //scanf("%s",isbn13); //ou gets(isbn13); 
 //printf("|------------------------------------------------|\n");  
// ex: 978-85-02-09376-8
 
resultado2 = validar_isbn13(isbn13); 
if(resultado2 == ISBN_OK){
  printf("| | < - - - - >  ISBN13 e Valido!  < - - - - > | |\n");
formatar_isbn13(isbn13,format13);
  printf("| | < - - - >   %s   < - - - >  | |\n",format13);
}else{         
  printf("| | < - - - - >  ERROR No ISBN13!  < - - - - > | |\n");
} printf("|------------------------------------------------|\n");  
 
return 0;
 
}