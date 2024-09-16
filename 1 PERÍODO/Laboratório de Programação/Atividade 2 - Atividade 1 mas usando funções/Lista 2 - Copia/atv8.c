#include <stdio.h>

void definaMassas (float sanduiche, float *hamburguer, float *presunto, float *queijo)
{
    *hamburguer = sanduiche * 0.1;
    *queijo = sanduiche * 0.1;
    *presunto = sanduiche * 0.5;
}

int main(void)
{
    float sanduiche = 0, presunto = 0, queijo = 0, hamburguer = 0;
    printf("Insira o numero de sanduiches a serem feitos: ");
    scanf("%f", &sanduiche);

    definaMassas(sanduiche, &hamburguer, &presunto, &queijo);

    printf("As quantidades em kg sao de %fkg de hamburguer, %fkg de queijo e %fkg de presunto", hamburguer, queijo, presunto);
    return 0;
}