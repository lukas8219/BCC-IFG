#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int makeTextIndex(char text[100]);
int getIndex(char letter);

const int key[2][2] = {{3, 1}, {5, 2}};
const int inversedkey[2][2] = {{2, -1}, {-5, 3}};

int main(void)
{
    char text[100] = "bom dia";
    int *textIndex[100] = makeTextIndex(text);
    for (int i = 0; i < 100; i++)
    {
        printf("%i", text[i]);
    }
}

int makeTextIndex(char text[100])
{
    int TextIndex[100];
    for (int i = 0; i < strlen(text); i++)
    {
        if(isalnum(text[i]))
        {
            TextIndex[i] = getIndex(text[i]);
        }
    }
    return &TextIndex;
}

int getIndex(char letter)
{   
    char alphabet[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int index = -1;

    letter = toupper(letter);
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] == letter)
        {
            index = i;
            break;
        }
    }
    return index;
}
