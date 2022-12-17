#include <stdio.h>
#include <stdlib.h>
int main()
{
    int domingo = 0; int segunda = 1; int terca = 2; int quarta = 3;int quinta = 4; int sexta = 5; int sabado = 6; int dia;
    printf ("Digite um dia da semana (0..6)\n"); scanf ("%d",&dia);
     if (dia == 0)
      printf ("Final de semana");
       else
        if (dia == 1)
         printf ("Dia da semana");
          else
           if (dia == 2)
            printf ("Dia da semana");
             else
              if (dia == 3)
               printf ("Dia da semana");
                else
                 if (dia == 4)
                  printf ("Dia da semana");
                   else
                    if (dia == 5)
                     printf ("Dia da semana");
                      else
                       if (dia == 6)
                        printf ("Final de semana");
                         else
                          printf("Dia %d invalido",dia);
                         
     
    return 0;
}