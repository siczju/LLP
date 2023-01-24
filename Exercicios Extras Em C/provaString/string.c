#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isUpper(char string[])
{
    int i, counter = 0;

    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
            counter++;
    }
    return counter;
}

int isLower(char string[])
{
    int i, counter = 0;

    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
            counter++;
    }
    return counter;
}

int isDigit(char string[])
{
    int i, counter = 0;

    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] >= '0' && string[i] <= '9')
            counter++;
    }
    return counter;
}

int isOther(char string[])
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
    char text[81] = {"Ana, de 21 anos, come 3 maçãs Gala e 2 peras Coração por dia"};
   // printf("Digite caracteres:"); scanf("%s", &text);

    printf("\n your text: '%s'\n size: %d\n", text, strlen(text));

    int textupper = isUpper(text);
    printf("\nupper: %d\n", textupper);
    int textlower = isLower(text);
    printf("lower: %d\n", textlower);
    int textdigit = isDigit(text);
    printf("digits: %d\n", textdigit);
    int textother = isOther(text);
    printf("others: %d\n", textother);

    return 0;
}
