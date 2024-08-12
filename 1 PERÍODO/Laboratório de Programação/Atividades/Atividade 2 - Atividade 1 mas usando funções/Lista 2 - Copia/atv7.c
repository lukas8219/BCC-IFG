#include <stdio.h>

void definaConta(float conta)
{
    int carlos = conta / 3;
    float felipe = conta - carlos*2;
    printf("Carlos e Andre devem pagar %i cada e Felipe deve pagar %2.f", carlos, felipe);
}

int main(void)
{
    float conta;
    printf("Insira o valor da conta: ");
    scanf("%f", &conta);
    definaConta(conta);
    return 0;
}