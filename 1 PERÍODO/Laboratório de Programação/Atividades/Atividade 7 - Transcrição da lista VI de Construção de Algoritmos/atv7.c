#include <stdio.h>

//07) Faça um algoritmo que receba 50 valores positivos de um usuário de forma desordenada
//em um vetor. Em seguida, ordene o vetor em ordem crescente. Dica: use um segundo vetor.

#define LENGTH 5
int positiveNumbers[LENGTH] = {};

void bubbleSort(void);

int main(void)
{
    printf("Insira os numeros desordenados: ");
    for (int i = 0; i < LENGTH; i++)
    {
        scanf("%d", &positiveNumbers[i]);
    }
    bubbleSort();

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%d", positiveNumbers[i]);
    }
}

void bubbleSort(void)
{
    int tmp = 0;
    for (int i = 0; i < LENGTH - 1; i++)
    {
        for (int j = 0; j < LENGTH - 1 - i; j++)
        {
            if (positiveNumbers[j] > positiveNumbers[j + 1])
            {
                tmp = positiveNumbers[j];
                positiveNumbers[j] = positiveNumbers[j + 1];
                positiveNumbers[j + 1] = tmp;
            }
        }
    }
}