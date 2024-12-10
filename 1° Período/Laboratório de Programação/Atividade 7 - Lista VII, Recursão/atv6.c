#include <stdio.h>
// 06) Escreva uma função recursiva que retorne o menor elemento em um vetor

int lower(int n[], int size, int m);

int main(void)
{
    int n[] = {6, 2, 3, 4, 5, 1};
    int size = sizeof(n) / sizeof(n[0]);
    printf("%d", lower(n, size, n[size - 1]));
}

int lower(int n[], int size, int m)
{
    if (size == 1)
        return (n[0] < m) ? n[0] : m;
    if (n[size - 1] < m)
        m = n[size - 1];
    return lower(n, size - 1, m);
}