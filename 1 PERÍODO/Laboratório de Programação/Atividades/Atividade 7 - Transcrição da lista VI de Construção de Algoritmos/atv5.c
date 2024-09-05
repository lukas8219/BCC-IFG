#include <stdio.h>

//A criptografia só é completa quanto temos um processo que oculta as informações e outro
//processo (destino) responsável por descriptografar as informações, ou seja, conhece a regra
//inicial. Baseado no algoritmo construído no exercício anterior, faça um algoritmo que utilize
//uma função para descriptografar um vetor. Para isso, você terá que criar um algoritmo que lê
//um vetor de 10 posições e lê um valor chamado chave. Esse valor chave é o somatório dos
//elementos do vetor original, e será fornecido ao algoritmo. No exemplo anterior o valor chave
//é 70. O algoritmo lê o vetor e o valor chave, então passa para a função que irá retornar o
//vetor descriptografado. Junte os exercícios 04 e 05 em um mesmo algoritmo, mas usando
//funções diferentes.

#define LENGTH 10

int main(void)
{
    int cipherText[LENGTH] = {0};    
    int key = 0;

    printf("Insira 10 numeros criptografados: ");
    for (int i = 0; i < LENGTH; i++)
    {
        scanf("%d", &cipherText[i]);
    }

    printf("Insira a chave: ");
    scanf("%d", &key);

    for (int i = 0; i < LENGTH; i++)
    {
        cipherText[i] = cipherText[i] - key - i;
        printf("%d ", cipherText[i]);       
    }
    return 0;
}