#include <stdio.h>

int extraiaDD(long long int num)
{
    return num = (num - (num % 100000000))/100000000;
}
int main(void)
{
    long long int num = 0;
    printf("Insira o numero de celular: ");
    scanf("%lli", &num);
    num = extraiaDD(num);
    printf("O DDD e de: %lli", num);
    return 0;
}
