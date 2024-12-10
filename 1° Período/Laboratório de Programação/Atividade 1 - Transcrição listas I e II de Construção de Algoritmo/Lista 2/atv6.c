#include <stdio.h>

int main(void)
{
    int tempo, ano, dia, mes;
    printf("Insira o tempo sem acidenetes em dias: ");
    scanf("%i", &tempo);

    ano = tempo / 360;
    mes = (tempo % 360) / 30;
    dia = (tempo % 360) % 30;

    printf("Estamos a %i anos, %i meses, %i dias sem acidenetes no trabalho", ano, mes, dia);
    return 0;
}