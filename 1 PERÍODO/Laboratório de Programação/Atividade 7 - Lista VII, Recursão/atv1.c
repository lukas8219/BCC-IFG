#include <stdio.h>

//01) Desenvolva um algoritmo que crie um vetor com 10 posições, de forma que o campo 0 tenha valor 1,
//campo 1 tenha valor 2, e assim por diante. Agora imprima os elementos desse vetor de forma recursiva, em
//ordem crescente.

void printArray(int array[], int size);

int main(void)
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);
    printArray(array, size);
}

void printArray(int array[], int size)
{
    if (size == 0)
        return;

    printf("%d ", array[0]);
    printArray(&array[1], size - 1);
}