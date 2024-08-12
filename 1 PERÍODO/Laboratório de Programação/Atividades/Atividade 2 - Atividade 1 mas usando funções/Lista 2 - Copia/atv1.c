#include <stdio.h>

float calcularSalario(float salario, float vendas)
{
    return salario + vendas*0.15;
}

int main(void)
{
    char vendedor1[100], vendedor2[100];
    float salario1, salario2, vendas1, vendas2;

    printf("Insira nome do vendedor 1: ");
    gets(vendedor1);
    fflush(stdin);

    printf("Insira valor do salario fixo: ");
    scanf("%f", &salario1);
    fflush(stdin);

    printf("Insira vendas do vendedor 1: ");
    scanf("%f", &vendas1);
    fflush(stdin);

    printf("Insira nome do vendedor 2: ");
    gets(vendedor2);
    fflush(stdin);

    printf("Insira valor do salario fixo: ");
    scanf("%f", &salario2);
    fflush(stdin);

    printf("Insira vendas do vendedor 2: ");
    scanf("%f", &vendas2);
    fflush(stdin);

    printf("O salario do vendedor %s e de %2.f", vendedor1, calcularSalario(salario1, vendas1));
    printf("O salario do vendedor %s e de %2.f", vendedor2, calcularSalario(salario2, vendas2));
}