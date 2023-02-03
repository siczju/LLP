#include <stdio.h>
#include <string.h>
#define TRUE 0
#define FALSE -1

int palindroma(char str[])
{
    if (strlen(str) == 1)
        return TRUE;
    else if (str[0] != str[strlen(str) - 1])
        return FALSE;

    char dest[strlen(str)];
    strncpy(&dest, &str[1], strlen(str) - 2);
    strcpy(str,dest);
    return palindroma(str);
}

int main()
{
    char str[5] = {"rotor"};

    if (palindroma(str) == TRUE)
        printf("the string is a palindroma (:");
    else
        printf("the string is'nt a pa if palindroma ):");
}