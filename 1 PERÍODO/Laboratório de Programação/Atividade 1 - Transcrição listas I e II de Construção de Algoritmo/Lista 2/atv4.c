#include <stdio.h>


int main(void)
{
    int a, b, c, d, e, f, x, y;
    printf("Insira a: ");
    scanf("%i", &a);

    printf("Insira b: ");
    scanf("%i", &b);

    printf("Insira c: ");
    scanf("%i", &c);

    printf("Insira d: ");
    scanf("%i", &d);

    printf("Insira e: ");
    scanf("%i", &e);

    printf("Insira f: ");
    scanf("%i", &f);

    x = (c*e - b*f)/(a*e - b*d);
    y = (a*f - c*d)/(a*e - b*d);

    printf("X: %i Y: %i", x, y);
    return 0;
}