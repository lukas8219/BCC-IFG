#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float altura, largura, area;
    printf("Insira altura: ");
    scanf("%f", &altura);

    printf("Insira largura: ");
    scanf("%f", &largura);

    area = altura * largura;
    printf("A area do retangulo e de: %2.f", area);
    return 0;
}
