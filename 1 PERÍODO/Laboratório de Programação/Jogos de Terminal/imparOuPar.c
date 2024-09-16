#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

bool ehPar(int soma)
{
    bool ehPar = false;
    if (soma % 2 == 0)
    {
        ehPar = true;
    }
    return ehPar;
}

int main(void)
{
    printf("\t \t JOGO PAR OU IMPAR\n");
    int num1, num2, soma, imparOuPar;

    printf("Escolha a opcao: \n1. Par\t2. Impar\n");
    scanf("%i", &imparOuPar);
    if (imparOuPar != 1 & imparOuPar != 2)
    {
        printf("Opcao invalida\n");
        return 1;
    }

    printf("Insira um numero: ");
    scanf("%i", &num1);

    srand(time(0));
    num2 = rand() % 10;
    printf("O computador escolheu %i\n", num2);

    soma = num1 + num2;

    if (imparOuPar == 1)
    {
        if (ehPar(soma))
        {
            printf("Voce ganhou!");
        } else {
            printf("O computador ganhou!");
        }
    } else if (imparOuPar == 2)
    {
        if (!ehPar(soma))
        {
            printf("Voce ganhou!");
        } else {
            printf("O computador ganhou");
        }
    }
    return 0;
}