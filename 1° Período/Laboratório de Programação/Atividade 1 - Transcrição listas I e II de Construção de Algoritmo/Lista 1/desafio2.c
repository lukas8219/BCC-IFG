#include <stdio.h>

int main(void)
{
    long long int num = 0;
    printf("Insira o numero de celular: ");
    scanf("%lli", &num);
    num = (num - (num % 100000000))/100000000;
    printf("O DDD e de: %lli", num);
    return 0;
}
