#include <stdio.h>

void calculeValor(int *s, int *m, int *l)
{
    *s *= 10;
    *m *= 12;
    *l *= 15;

}

int main(void)
{
    int s, m, l;

    printf("Insira o numero de camisetas pequenas: ");
    scanf("%i", &s);
    fflush(stdin);

    printf("Insira o numero de camisetas medias: ");
    scanf("%i", &m);
    fflush(stdin);

    printf("Insira o numero de camisetas grandes: ");
    scanf("%i", &l);
    fflush(stdin);

    calculeValor(&s, &m, &l);

    printf("O valor total e de %i", s + m + l);
    return 0;
}
