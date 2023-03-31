#include <stdio.h>

int main()
{

   struct horario{
    int horas;
    int minutos;
    int segundos;
    double teste;
    char letra
   };
   
   struct horario agora;
   
   agora.horas = 13;
   agora.minutos = 11;
   agora.segundos = 16;
   
   struct horario depois;
   
   depois.horas = agora.horas + 10;
   depois.minutos = agora.minutos;
   depois.segundos = agora.segundos + 10;
   depois.teste = 50.55 / 123;
   depois.letra = 'a';
   
   printf("%d\n",depois.horas);
   printf("%d\n",depois.minutos);
   printf("%d\n",depois.segundos);
   printf("%f\n",depois.teste);
   printf("%c",depois.letra);

    return 0;
}
