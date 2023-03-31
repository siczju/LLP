#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isUpper(char c) {
 return c >= 'A' && c <= 'Z';
 }

 int isLower(char c) {
 return c >= 'a' && c <= 'z';
 }

 int isDigit(char c) {
 return c >= '0' && c <= '9';
 }

int upper(char string[])
{
    int i, counter = 0;

    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
            counter++;
    }
    return counter;
}

int lower(char string[])
{
    int i, counter = 0;

    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
            counter++;
    }
    return counter;
}

int digit(char string[])
{
    int i, counter = 0;

    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] >= '0' && string[i] <= '9')
            counter++;
    }
    return counter;
}

int other(char string[])
{
    int i, counter = 0;
    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z' || string[i] >= 'a' && string[i] <= 'z' || string[i] >= '0' && string[i] <= '9')
            continue;
        else
            counter++;
    }
    return counter;
}

int main()
{
    char text[81] = {"Ana, de 21 anos, come 3 macas Gala e 2 peras Coracao por dia"};
   // printf("Digite caracteres:"); scanf("%s", &text);

    printf("\n your text: '%s'\n size: %d\n", text, strlen(text));

    int textupper = upper(text);
    printf("\nupper: %d\n", textupper);
    int textlower = lower(text);
    printf("l: %d\n", textlower);
    int textdigit = digit(text);
    printf("digits: %d\n", textdigit);
    int textother = other(text);
    printf("others: %d\n", textother);

    return 0;
}
