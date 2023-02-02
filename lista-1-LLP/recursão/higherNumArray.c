#include <stdio.h>

int higherNumArray(int array[], int size, int index){
    if(size == 0) return array[index];
      else if(array[size - 1] < array[index]) 
        return higherNumArray(array, size - 1, size - 1);
         else return higherNumArray(array, size - 1, index); 
}

int main()
{
   int array[10] = {132,267,123,24,542,634,72,833,34,112};
   printf("higher: %d\n",higherNumArray(array,9, 0));
}


