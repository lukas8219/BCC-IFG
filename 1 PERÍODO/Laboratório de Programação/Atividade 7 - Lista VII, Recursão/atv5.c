#include <stdio.h>

float media(int n[], int size);

int main(void)
{
    int n[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(n) / sizeof(n[0]);
    printf("%.2f\n", (media(n, size)/size));
    return 0;
}

float media(int n[], int size)
{
    if (size == 0)
        return 0;

    return n[0] + media(&n[1], size - 1);
}

