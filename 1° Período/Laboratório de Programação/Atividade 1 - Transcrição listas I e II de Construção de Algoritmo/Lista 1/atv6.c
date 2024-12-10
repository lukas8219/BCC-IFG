#include <stdio.h>

int main(void)
{
    float custoFabrica, custoConsumidor;
    printf("Insira custo de Fabrica: ");
    scanf("%f", &custoFabrica);

    custoConsumidor = custoFabrica + (custoFabrica * 0.28) + (custoFabrica * 0.45);
    printf("Custo ao consumidor de: %f", custoConsumidor);
    return 0;
}