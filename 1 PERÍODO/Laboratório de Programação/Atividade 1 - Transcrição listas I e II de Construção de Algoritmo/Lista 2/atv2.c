#include <stdio.h>

int main(void)
{
    int num, cen, dez, un;

    printf("Insira um numero de 3 digitos: ");
    scanf("%i", &num);

    cen = num/100;
    dez = (num % 100)/10;
    un = num % 10;

    printf("CENTEZA: %i\nDEZENA: %i\nUNIDADE: %i", cen, dez, un);
    return 0;
}