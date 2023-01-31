#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calcular_anos(float altura1, float altura2) {
    int tempo = 0 ;
   
    while (altura1 >= altura2) {
        altura1 += 0.02;
        altura2 += 0.04;
        tempo++;
    }
    /*  for(tempo = 0; altura1 >= altura2; tempo++) {
        altura1 += 0.02;
        altura2 += 0.04;
    }
     do {
        altura1 += 0.02;
        altura2 += 0.04;
        tempo++;
    } while (altura1 >= altura2);
    */
    return tempo;
}

int main() {
    float fulano = 1.7;
    float cicrano = 1.5;
    int anos;
   
    anos = calcular_anos (fulano,cicrano);
     printf ("demora %d anos",anos);
         
    return 0;
}