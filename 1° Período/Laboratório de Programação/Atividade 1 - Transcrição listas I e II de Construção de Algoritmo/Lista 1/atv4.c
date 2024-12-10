#include <stdio.h>
#include <math.h>

int main(void)
{
    float x1, y1, x2, y2, d;

    printf("Defina Px1: ");
    scanf("%f", &x1);

    printf("Defina Py1: ");
    scanf("%f", &y1);

    printf("Defina Px2: ");
    scanf("%f", &x2);

    printf("Defina Py2: ");
    scanf("%f", &y2);

    d = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    printf("A distancia entre os dois pontos e de: %2.f", d);

    return 0;
}