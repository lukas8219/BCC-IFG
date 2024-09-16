#include <stdio.h>

void extrairUnidades(int num)
{
    int cen, dez, un;
    cen = num/100;
    dez = (num % 100)/10;
    un = num % 10;

    printf("CENTEZA: %i\nDEZENA: %i\nUNIDADE: %i", cen, dez, un);
}

int main(void)
{
    int num;
    printf("Insira um numero de 3 digitos: ");
    scanf("%i", &num);
    extrairUnidades(num);
    return 0;
}