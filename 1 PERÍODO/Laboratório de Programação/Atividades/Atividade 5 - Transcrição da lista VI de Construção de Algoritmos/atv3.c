#include <stdio.h>

//03) Defina um vetor de tamanho 40. Agora faça um algoritmo que leia 39 números de forma
//ordenada crescente. Em seguida, leia um número qualquer e coloque ele no vetor de forma
//a manter o ordenamento. Utilize uma função para ordenar.

#define LENGTH 40
int numbers[LENGTH] = {0};
void bubbleSort(void);

int main(void)
{   
    for (int i = 0; i < LENGTH - 1; i++)
    {
        numbers[i] = i;
    }

    printf("Insira um numero qualquer: ");
    scanf("%d", &numbers[LENGTH - 1]);
    bubbleSort();

    printf("Vetor ordenado: ");
    for (int i = 0; i < LENGTH; i++)
    {
        printf("%i", numbers[i]);
    }
    return 0;
}

void bubbleSort(void)
{
    int tmp = 0;
    for (int i = 0; i < LENGTH - 1; i++)
    {
        for (int j = 0; j < LENGTH - 1 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                tmp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = tmp;
            }
        }
    }
}