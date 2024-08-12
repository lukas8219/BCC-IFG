#include <stdio.h>

int main(void)
{
    float saldo, entrada, retirada;
    saldo = 0;

    printf("Insira entrada mes 1: ");
    scanf("%f", &entrada);
    printf("Insira retirada mes 1: ");
    scanf("%f", &retirada);
    saldo = saldo + entrada - retirada;
    saldo = saldo + (saldo * 0.2);
    printf("O saldo do mes 1 foi de: %2.f\n", saldo);

    printf("Insira entrada mes 2: ");
    scanf("%f", &entrada);
    printf("Insira retirada mes 2: ");
    scanf("%f", &retirada);
    saldo = saldo + entrada - retirada;
    saldo = saldo + (saldo * 0.2);
    printf("O saldo do mes 2 foi de: %2.f\n", saldo);

    printf("Insira entrada mes 3: ");
    scanf("%f", &entrada);
    printf("Insira retirada mes 3: ");
    scanf("%f", &retirada);
    saldo = saldo + entrada - retirada;
    saldo = saldo + (saldo * 0.2);
    printf("O saldo do mes 3 foi de: %2.f\n", saldo);

    printf("Insira entrada mes 4: ");
    scanf("%f", &entrada);
    printf("Insira retirada mes 4: ");
    scanf("%f", &retirada);
    saldo = saldo + entrada - retirada;
    saldo = saldo + (saldo * 0.2);
    printf("O saldo do mes 4 foi de: %2.f\n", saldo);

    return 0;
}
