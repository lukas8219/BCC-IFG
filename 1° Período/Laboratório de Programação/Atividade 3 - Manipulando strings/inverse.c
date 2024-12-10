#include <stdio.h>
#include <string.h>

int main()
{
    // ola
    // alo
    char text[100];
    char temp[100];
    int size = 0;

    printf("Insira o seu texto: ");
    gets(text);

    size = strlen(text);

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