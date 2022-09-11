#include <stdio.h>
#include <math.h>

float calc_dist(int xa, int ya, int xb, int yb) {
    return sqrt( pow(xb-xa,2) + pow(yb-ya, 2) );
}
int main() {
    int xa,ya,xb,yb;
     float dist; 
      dist = calc_dist(xa,ya,xb,yb);
      printf("Digite as coordenadas para o primeiro ponto ");
       scanf("%i %i", &xa, &ya);
        printf("Digite as coordenadas para o segundo ponto ");
         scanf("%i %i", &xb, &yb);
            dist = calc_dist(xa,ya,xb,yb);
             printf("a distancia e %.2f", dist);
}