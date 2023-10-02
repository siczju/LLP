#include <stdio.h>
/* 

pX = &x; (sem asterisco) -> acessando o endereço do ponteiro
*pX = &x; ->valor que o ponteiro está apontando  
 
pX -> endereço
*pX -> valor

 (*depois).hora = 20;
  depois->hora = 20;

*/

 struct horario{
         int *pHora;
         int *pMinuto;
         int *pSegundo;
    };

int main(void){

    struct horario hoje;

    int hora = 200;
    int minuto = 300;
    int segundo = 400;

    hoje.pHora = &hora;
    hoje.pMinuto = &minuto;
    hoje.pSegundo = &segundo;

    printf("Hora - %i\n",*hoje.pHora);
    printf("Minuto - %i\n",*hoje.pMinuto);
    printf("Segundo - %i\n",*hoje.pSegundo);

    *hoje.pSegundo = 1000;
     printf("Segundo - %i\n",*hoje.pSegundo);
}