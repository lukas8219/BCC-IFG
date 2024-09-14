#include <stdio.h>

//06) Um somatório dos vizinhos acontece sempre que um número é acrescido de seus vizinhos
//mais próximos laterais. Faça um algoritmo que leia um vetor de tamanho 50. Após ter lido
//todos os elementos, some para cada elemento: elemento + primeiro vizinho à esquerda +
///primeiro vizinho a direita. No caso do primeiro elemento e do último elemento do vetor, o
//primeiro elemento será somente a soma do elemento com o seu vizinho à direita e o último
//será a soma do elemento com o seu vizinho a esquerda. Um exemplo para o algoritmo é:
//1- Vetor EXEMPLO [1][3][4][7]
//2- O vetor é alterado e o resultado é: Vetor [4][8][14][11]

#define LENGTH 50    

int main(void)
{
    int vetor[LENGTH] = {0};
    int resultado[LENGTH];

    printf("Insira os numeros: \n");
    for (int i = 0; i < LENGTH; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < LENGTH; i++)
    {
        if (i == 0)
            resultado[i] = vetor[i] + vetor[i+1];
        else if (i == (LENGTH - 1))
            resultado[i] = vetor[i] + vetor[i-1];
        else
            resultado[i] = vetor[i - 1] + vetor[i] + vetor[i + 1];
    }

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%d ", resultado[i]);
    }

    return 0;
}