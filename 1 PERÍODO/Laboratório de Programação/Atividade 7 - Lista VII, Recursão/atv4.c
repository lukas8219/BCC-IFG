#include <stdio.h>

//04) Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros.

int sum(int n[], int size);

int main(void)
{
    int n[]= {1, 2, 3, 4, 5, 6};
    int size = sizeof(n) / sizeof(n[0]);
    printf("%d", sum(n, size));
}

int sum(int n[], int size)
{
    if (size == 0)
        return 0;

    return n[0] + sum(&n[1], size - 1);
}