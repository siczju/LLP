#include <stdio.h>
#include <string.h>
#define TRUE 0
#define FALSE -1

int palindroma(char str[]){
    

    if(str[strlen(str)] == 1)
       return TRUE;
    else if(str[0] != str[strlen(str) - 2])
       return FALSE;


     char dest[strlen(str)];
     strncpy(&dest,&str[1], strlen(str) - 3);

     printf("str: %s\n dest: %s\n",str,dest);
    
     return palindroma(dest);

    
}

int main()
{
    char str[5] = {"rotor"};
   
    if(palindroma(str) == TRUE)
     printf("the string is a palindroma (:");
     else if(palindroma(str) == FALSE)
     printf("the string is'nt a palindroma ):");
   
}