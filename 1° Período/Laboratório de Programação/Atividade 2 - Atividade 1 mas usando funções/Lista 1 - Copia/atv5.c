#include <stdio.h>

void troca(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(void)
{
    int a, b;
    printf("Insira a: ");
    scanf("%i", &a);
    printf("Insira b: ");
    scanf("%i", &b);
    troca(&a, &b);
    printf("As variaveis foram trocadas: agora A e: %i e B e: %i", a, b);
    return 0;
}