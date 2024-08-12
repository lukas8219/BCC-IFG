#include <stdio.h>
#include <ctype.h>
#include <string.h>

// le um texto do terminal e imprime quantas vezes cada letra aparece

int main()
{
    char text[100];
    printf("Insira seu texto: ");
    gets(text);

    int alphabet[26] = {0}; // numero maximo de letras no alfabeto 

    for (int i = 0; i < strlen(text); i++)
    {
        if (toupper(text[i]) >= 'A' && toupper(text[i]) <= 'Z')
        {
            alphabet[toupper(text[i]) - 'A']++; 
        }
    }
    
    for (int i = 0; i < 26; i++)
    {
        if(alphabet[i] != 0)
        {
            printf("%c: %d\n", i + 'A', alphabet[i]);
        }
    }
    return 0;
}