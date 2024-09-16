#include <stdio.h>

void diminua(int *a)
{
    *a -= 1;
}

int main(void)
{
    int a;
    printf("Insira a: ");
    scanf("%i", &a);
    diminua(&a);
    printf("%i", a);
    return 0;
}