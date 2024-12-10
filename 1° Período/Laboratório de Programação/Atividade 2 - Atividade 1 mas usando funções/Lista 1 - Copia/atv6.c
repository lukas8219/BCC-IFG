#include <stdio.h>

float calculeCustoConsumidor(float custoFabrica, float custoConsumidor)
{
    return custoFabrica + (custoFabrica * 0.28) + (custoFabrica * 0.45);
}

int main(void)
{
    float custoFabrica, custoConsumidor;
    printf("Insira custo de Fabrica: ");
    scanf("%f", &custoFabrica);

    custoConsumidor = calculeCustoConsumidor(custoFabrica, custoConsumidor);
    printf("Custo ao consumidor de: %4.f", custoConsumidor);
    return 0;
}