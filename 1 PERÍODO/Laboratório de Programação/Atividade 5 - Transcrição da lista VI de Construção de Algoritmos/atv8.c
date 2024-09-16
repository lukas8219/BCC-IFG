#include <stdio.h>

// le um texto do terminal e imprime quantas vezes cada letra aparece
// ola mundo !!
// o = 2, l = 1, a = 1

int main()
{
    char text[100];
    printf("Insira seu texto: ");
    gets(text);

    int ascii[128] = {0}; // numero maximo de letras no alfabeto 
    for (int i = 0; text[i] != '\0'; i++)
    {
        ascii[text[i]]++; 
    }
    
    for (int i = 0; i < 128; i++)
    {
        if (ascii[i] != 0)
        printf("%c: %d\n", i, ascii[i]);
    }
    return 0;
}