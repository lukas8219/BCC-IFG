#include <stdio.h>

void calculeTempo(int tempo)
{
    int ano = tempo / 360;
    int mes = (tempo % 360) / 30;
    int dia = (tempo % 360) % 30;
    printf("Estamos a %i anos, %i meses, %i dias sem acidenetes no trabalho", ano, mes, dia);
}

int main(void)
{
    int tempo;
    printf("Insira o tempo sem acidenetes em dias: ");
    scanf("%i", &tempo);
    calculeTempo(tempo);
    return 0;
}