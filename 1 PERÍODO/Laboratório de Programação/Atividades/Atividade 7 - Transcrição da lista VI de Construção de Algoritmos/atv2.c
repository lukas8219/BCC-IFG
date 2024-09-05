#include <stdio.h>

//02) Faça um algoritmo para ler um vetor de 30 números. Após isto, ler mais um número
//qualquer, calcular e escrever quantas vezes esse número aparece no vetor. Para esse
//algoritmo, a busca no vetor de um número deve estar em uma função.

#define LENGTH 30
int findFrequency(int numbers[], int num);

int main(void)
{
    int numbers[LENGTH] = {0};
    int num = 0;

    printf("Insira os numeros: \n");
    for (int i = 0; i < LENGTH; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("Insira o numero que deseja consultar frequencica: ");
    scanf("%d", &num);

    printf("Esse numero apareceu %d vezes", findFrequency(numbers, num));
    return 0;
}

int findFrequency(int numbers[], int num)
{
    int frequency = 0;
    for (int i = 0; i < LENGTH; i++)
    {
        if (numbers[i] == num)
        {
            frequency++;
        }
    }
    return frequency;
}