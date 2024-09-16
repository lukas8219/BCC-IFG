#include <stdio.h>

int main(void)
{
    int numA, numB, numC, numD, numE, soma;

    printf("Insira numA: ");
    scanf("%i", &numA);

    printf("Insira numB: ");
    scanf("%i", &numB);

    printf("Insira numC: ");
    scanf("%i", &numC);

    printf("Insira numD: ");
    scanf("%i", &numD);

    printf("Insira numE: ");
    scanf("%i", &numE);

    soma = numA*(numA%2) + numB*(numB%2) + numC*(numC%2) + numD*(numD%2) + numE*(numE%2);
    printf("A soma dos numeros impares e de: %i", soma);

    return 0; 
}