#include <stdio.h>
#include <math.h>

int main(void)
{
    float hip, catA, catB;
    printf("Insira cateto A: ");
    scanf("%f", &catA);
    
    printf("Insira cateto B: ");
    scanf("%f", &catB);

    hip = sqrt((catA*catA) + (catB*catB));
    printf("A hiponusa e de %f", hip);
    return 0;
}