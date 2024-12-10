#include <stdio.h>

//Veja como você está. Escreva um programa que leia nomes pelo teclado e os imprima na tela.
//Use as funções puts e gets para a leitura e impressão na tela.

int main(void)
{
    char n[10][100];
    for (int i = 0; i < 10; i++)
    {
        gets(n[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        puts(n[i]);
    }
}