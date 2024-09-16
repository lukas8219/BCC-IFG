#include <stdio.h>

int main(void)
{
    float sanduiche, presunto, queijo, hamburguer;
    printf("Insira o numero de sanduiches a serem feitos: ");
    scanf("%f", &sanduiche);

    hamburguer = sanduiche * 0.1;
    queijo = sanduiche * 0.1;
    presunto = sanduiche * 0.5;

    printf("As quantidades em kg sao de %fkg de hamburguer, %fkg de queijo e %fkg de presunto", hamburguer, queijo, presunto);
    return 0;
}