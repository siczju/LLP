#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isUpper(char c[])
{
    int i, counter = 0;

    for (i = 0; i < strlen(c); i++)
    {
        if (c[i] >= 'A' && c[i] <= 'Z')
            counter++;
    }
    return counter;
}

int isLower(char c[])
{
    int i, counter = 0;

    for (i = 0; i < strlen(c); i++)
    {
        if (c[i] >= 'a' && c[i] <= 'z')
            counter++;
    }
    return counter;
}

int isDigit(char c[])
{
    int i, counter = 0;

    for (i = 0; i < strlen(c); i++)
    {
        if (c[i] >= '0' && c[i] <= '9')
            counter++;
    }
    return counter;
}

int isOther(char c[])
{
    int i, counter = 0;
    for (i = 0; i < strlen(c); i++)
    {
        if (c[i] >= 'A' && c[i] <= 'Z' || c[i] >= 'a' && c[i] <= 'z' || c[i] >= '0' && c[i] <= '9')
            continue;
        else
            counter++;
    }
    return counter;
}

int main()
{
    char text[81] = {};
    printf("Digite caracteres:");
    scanf("%s", &text);

    printf("\n your text: '%s'\n size: %1d\n", text, strlen(text));

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
