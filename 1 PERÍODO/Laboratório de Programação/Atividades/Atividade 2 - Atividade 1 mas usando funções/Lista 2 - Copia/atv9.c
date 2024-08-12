#include <stdio.h>
#include <math.h>

float calculeHipotenusa (float catA, float catB)
{
    return sqrt((catA*catA) + (catB*catB));
}

int main(void)
{
    float hip, catA, catB;
    printf("Insira cateto A: ");
    scanf("%f", &catA);
    
    printf("Insira cateto B: ");
    scanf("%f", &catB);

    hip = calculeHipotenusa(catA, catB);
    printf("A hiponusa e de %f", hip);
    return 0;
}