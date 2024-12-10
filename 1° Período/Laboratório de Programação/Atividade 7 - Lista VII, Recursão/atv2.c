#include <stdio.h>

//02) Faça o mesmo na questão 01, mas sem mudar a constituição do vetor, imprima de forma decrescente.

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

    printArray(&array[1], size - 1);
    printf("%d ", array[0]);
}