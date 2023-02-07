#include <stdio.h>
 
void binary(int binaryVetor[], int index, int denary){
    if(denary == 0)
     binaryVetor[index] = denary;
    else{
     binaryVetor[index] = denary % 2;
     binary(binaryVetor, index - 1, denary / 2);
    }
}
 
void main(){
    int i, x, n = 1, denary = 0, index, binario[8] = {0};
    //   printf("type a denary value: "); scanf("%d",&denary);

    for(; denary <= 255; denary++){
        binary(binario, 7, denary);
      for(x = 0; x < 8; x++){
        printf("%d", binario[x]);
}
    printf(" com 'Decimal' de [%d]", denary);
    printf("\n");
    }
}

