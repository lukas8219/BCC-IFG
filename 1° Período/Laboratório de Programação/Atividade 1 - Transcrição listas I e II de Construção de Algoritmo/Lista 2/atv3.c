#include <stdio.h>

int main(void)
{
    int dur, hr, min, sec;
    printf("Insira duracao em segundos: ");
    scanf("%i", &dur);

    hr = dur / 3600;
    min = (dur % 3600) / 60;
    sec = (dur % 3600) % 60;

    printf("A duracao foi de %ih%imin%is", hr, min, sec);
    return 0;
}