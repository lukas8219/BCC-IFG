#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    char temp[100];

    printf("Insira o seu texto: ");
    gets(text);

    int size = strlen(text);

    for (int i = 0, j = size - 1; i < size; i++, j--)
    {
        temp[i] = text[j];
    }

    for (int i = 0; i < size; i++)
    {
        printf("%c", temp[i]);
    }
    return 0;
}