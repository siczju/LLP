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
    int denary, index, binario[8] = {0};

    printf("type a denary value: "); scanf("%d",&denary);
    
    binary(binario, 7, denary);

    for(denary = 0; denary < 8; denary++)
        printf("%d", binario[denary]);
}