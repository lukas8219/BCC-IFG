#include <stdio.h>

int main(void)
{
    int carlos;
    float felipe, conta;
    printf("Insira o valor da conta: ");
    scanf("%f", &conta);

    carlos = conta / 3;
    felipe = conta - carlos*2;

    printf("Carlos e André devem pagar %i cada e Felipe deve pagar %2.f", carlos, felipe);
    return 0;
}