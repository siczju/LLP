#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find_tri (int l1, int l2, int l3){
        if(l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1){
        printf("Os 3 lados formam um triangulo\n");
        if(l1 == l2 && l1 == l3)
            printf("Equilatero\n");
        else
            if(l1 == l2 || l1 == l3 || l2 == l3)
                printf("Isosceles\n");
            else
                printf("Escaleno\n");
    } else
        printf("Os 3 lados nao formam um triangulo\n");

}

int main() {
    int l1, l2, l3;
    printf("Digite tres valores ");
    scanf("%d\n%d\n%d", &l1, &l2, &l3);
 find_tri(l1,l2,l3);

   return 0;
}