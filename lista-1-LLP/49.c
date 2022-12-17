#include <stdio.h>
#include <string.h>
#include <ctype.h>

void to_upper(char text[])
{
    int i;
        for(i = 0; i < strlen(text); i++){
         text[i] = toupper(text[i]);
 
    }
}

void to_lower(char text[])
{
    int i;
        for(i = 0; i < strlen(text); i++){
         text[i] = tolower(text[i]);
    }
}


int main()
{
    char lower[50];
    char upper[50];
    char text[50];

    printf("Digite o texto: "); scanf("%s",text);

    strcpy(upper,text);
    to_upper(upper);

    strcpy(lower,text);
    to_lower(lower);

    printf(" A string digitada e: %s\n", text);
    printf(" A string em Maiusculo e: %s\n",upper);
    printf(" A string em Minusculo e: %s\n",lower);
    
    return 0;
}