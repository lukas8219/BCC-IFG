#include <stdio.h>
#include <stdlib.h>

//Veja como você está: escreva um programa que abra um arquivo texto e conte o número de
//caracteres presentes nele. Imprima o número de caracteres na tela

int main(void)
{
    FILE *fp;
    int n = 0;

    fp = fopen("arquivo.txt", "r");
    if(fp == NULL)
    {
        exit(1);
    }

    for (int i = 0; getc(fp) != EOF; i++)
    {
        n++;
    }
    fclose(fp);

    printf("O arquivo contem %i letras", n);
    return 0;
}
