#include <stdio.h>
 
void binary(int vet[], int index, int aux){
    if(aux == 0)
     vet[index] = aux;
    else{
     binary(vet, index - 1, aux / 2);
     vet[index] = aux % 2;
    }
}
 
void main(){
    int aux, index, binario[8] = {0};

    printf("type a denary value: "); scanf("%d",&aux);
    
    binary(binario, 7, aux);

    for(aux = 0; aux < 8; aux++)
        printf("%d", binario[aux]);
}