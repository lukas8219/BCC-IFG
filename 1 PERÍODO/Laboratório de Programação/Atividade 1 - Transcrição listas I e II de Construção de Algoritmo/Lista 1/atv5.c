#include <stdio.h>

int main(void)
{
    int a, b, temp;

    printf("Insira a: ");
    scanf("%i", &a);

    printf("Insira b: ");
    scanf("%i", &b);

    temp = a;
    a = b;
    b = temp;

    printf("As variaveis foram trocadas: agora A e: %i e B e: %i", a, b);
    return 0;
}