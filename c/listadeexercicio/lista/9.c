#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int n1, n2, n3, n4, mediaa, mediap;
      srand(time(NULL));
   n1 = rand () % 10;
   n2 = rand () % 10;
   n3 = rand () % 10;
   n4 = rand () % 10;
    printf("%d %d %d %d\n", n1, n2, n3, n4);
   mediaa = (n1 + n2 + n3 + n4) /4;
     printf("%d ",mediaa);
   mediap = (5);
     
   return 0;
}