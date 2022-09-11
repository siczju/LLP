#include <stdio.h>
#include <math.h>

int main() {
    int anos, meses, dia, dia_anos, dia_meses, total;
printf("informe sua idade em anos meses e dias\n");
scanf("%d %d %d", &anos, &meses, &dia );

dia_anos = 365;
dia_meses = 30;
anos *= dia_anos;
meses *= dia_meses;
total = meses + anos + dia;

printf("sua idade total em dias e: %d",total);


  return 0; }