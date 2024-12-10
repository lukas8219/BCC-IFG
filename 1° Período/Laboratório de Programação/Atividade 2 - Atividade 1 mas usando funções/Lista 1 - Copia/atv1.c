#include <stdio.h>

float calcularSaldo(float saldo);

int main(void)
{

    float saldo = 0;
    printf("Primeiro mes\n");
    saldo += calcularSaldo(saldo);
    printf("O saldo do mes 1 foi de: %2.f\n", saldo);

    printf("Segundo mes\n");
    saldo += calcularSaldo(saldo);
    printf("O saldo do mes 2 foi de: %2.f\n", saldo);

    printf("Terceiro mes\n");
    saldo += calcularSaldo(saldo);
    printf("O saldo do mes 3 foi de: %2.f\n", saldo);

    printf("Quarto mes\n");
    saldo += calcularSaldo(saldo);
    printf("O saldo do mes 4 foi de: %2.f\n", saldo);

    return 0;
}

float calcularSaldo(float saldo)
{
    float entrada, retirada;
    printf("Insira entrada: ");
    scanf("%f", &entrada);
    printf("Insira retirada: ");
    scanf("%f", &retirada);

    saldo = entrada - retirada;
    saldo = saldo + (saldo * 0.2);
    return saldo;
}