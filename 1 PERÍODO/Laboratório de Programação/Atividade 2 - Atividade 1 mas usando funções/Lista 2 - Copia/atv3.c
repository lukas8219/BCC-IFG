#include <stdio.h>

void calculeTempo(int dur)
{
    int hr = dur / 3600;
    int min = (dur % 3600) / 60;
    int sec = (dur % 3600) % 60;

    printf("A duracao foi de %ih%imin%is", hr, min, sec); 
}

int main(void)
{
    int dur;
    printf("Insira duracao em segundos: ");
    scanf("%i", &dur);
    calculeTempo(dur);
    return 0;
}