#include <stdio.h>
#include <string.h>
#define TRUE 0
#define FALSE -1

int palindroma(char str[])
{
    if (strlen(str) == 1)
        return TRUE;
    if (strlen(str) == 2) {
       if (str[0] == str[strlen(str) - 1])
           return TRUE;
    }
    if (str[0] != str[strlen(str) - 1])
        return FALSE;
       
    char dest[strlen(str)];
   
    strncpy(dest, &str[1], strlen(str) - 2);
   
    return palindroma(dest);
}

int main()
{
    char str[5] = {"maam"};

    if (palindroma(str) == TRUE)
        printf("the string [%s] is a palindroma (:",str);
    else
        printf("the string [%s] isn't a palindroma ):",str);
}
