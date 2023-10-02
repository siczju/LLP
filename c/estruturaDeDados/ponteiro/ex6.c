#include <stdlib.h>

void main()
{

    struct horario
    {
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora, *depois;
    depois = &agora;

    depois->hora = 20;   // ou (*depois).hora = 20;
    depois->minuto = 30; // ou (*depois).minuto = 12;
    depois->segundo = 50; // ou(*depois).segundo = 16;

    printf(" Horas: %i\n Minutos: %i\n Segundos: %i\n", agora.hora, agora.minuto, agora.segundo);
    
    int soma = 100;

    struct horario antes;
    
    antes.hora = soma + depois->segundo;
    antes.minuto = agora.hora + depois->minuto;
    antes.segundo = depois->minuto + depois->segundo;

    printf("\n Horas: %i\n Minutos: %i\n Segundos: %i\n", antes.hora, antes.minuto, antes.segundo);

}