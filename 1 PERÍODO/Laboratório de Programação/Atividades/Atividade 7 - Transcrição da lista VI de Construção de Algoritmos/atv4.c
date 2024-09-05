#include <stdio.h>

//4. Criptografia é uma das formas mais antigas de ocultar informações. Faça um algoritmo
//que leia um vetor de 10 valores. Some a cada um dos 10 campos o valor referente a soma de
//valores de todo o vetor. Em seguida, some a cada campo o valor de endereço do campo. Ao
//fim, cada campo será alterado para: o valor do campo + o somatório de todos os valores +
//valor de endereço. É obrigatório o uso de somente um vetor. Imprima o vetor resultante no
//final. Veja o exemplo:
//1- Vetor EXEMPLO [2][3][4][7][23][9][6][11][3][2]
//2- O somatório do vetor é: 70
//3- O vetor é alterado e o resultado é:
//Vetor [72][74][75][78][97]….

#define LENGTH 10

int main(void)
{
    int numbers[10] = {0};
    int sum = 0;

    printf("Insira 10 numeros: ");
    for (int i = 0; i < LENGTH; i++)
    {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    for (int i = 0; i < LENGTH; i++)
    {
        numbers[i] = numbers[i] + sum + i;
        printf("%i ", numbers[i]);
    }
    return 0;
    // [2][3][4][7][23][9][6][11][3][2]
}