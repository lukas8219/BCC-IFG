#include <stdio.h>

int main(void)
{
    int matriz[3][3] = {{1, 2, 3}, 
                        {4, 5, 6}, 
                        {7, 8, 9}};
    // matriz [3][3] -> 9 elementos
    // matriz[LINHA][COLUNA] -> acessamos cada elemento usando essa notação
    // por exemplo, o elemento 8 está em matriz[2][1]
    // lembre-se que sempre iniciamos a contagem em 0!!

    int vetor[9] = {0};
    // um vetor com 9 espaços para conseguir guardar a matriz

    int indiceDoVetor = 0;
    for (int linha = 0; linha < 3; linha++) // acessamos uma linha por vez, geralmente chamamos linhas de i
    {
        for (int coluna = 0; coluna < 3; coluna++) 
        // para cada linha, acessamos uma coluna por vez; 
        //geralmente chamamos colunas de j
        {
            vetor[indiceDoVetor] = matriz[linha][coluna];
            indiceDoVetor++;
        }
    }
    
    // vamos imprimir o vetor para ver se deu certo
    printf("vetor: ");
    for (int i = 0; i < 9; i++)
    {
        printf("[%d]", vetor[i]);
    }
}