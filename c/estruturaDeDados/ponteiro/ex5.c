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

//  (*depois).hora = 20;
    depois->hora = 20;    // ou (*depois).hora = 20;
    depois->minuto = 12;  // ou (*depois).minuto = 12;
    depois->segundo = 16; // ou (*depois).segundo = 16;

    printf(" Horas: %i\n Minutos: %i\n Segundos: %i\n", agora.hora, agora.minuto, agora.segundo);
}