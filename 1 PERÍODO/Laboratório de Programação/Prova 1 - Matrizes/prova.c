#include <stdio.h>
#include <stdlib.h>

char mtrx[10][10] = {{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'},
                     {'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T'},
                     {'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd'},
                     {'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n'},
                     {'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x'},
                     {'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7'},
                     {'8', '9', ' ', '!', '"', '#', '$', '%', '&', '!'},
                     {'(', ')', '*', '+', ',', '-', '.', '/', ':', ';'},
                     {'<', '=', '>', '?', '@', '[', '!', ']', '^', '_'},
                     {'`', '{', '|', '}', '~', ' ', ' ', ' ', ' ', ' '}};


void printMtrx(void);
void copyMtrxNumbers(void);
void printMainDiagonal(void);
void newArray(void);

int main()
{
    printf("Questao 1:\n");
    printMtrx();
    printf("\n\nQuestao 2:\n");
    copyMtrxNumbers();
    printf("\n\nQuestao 3:\n");
    printMainDiagonal();
    printf("\n\nQuestao 4:\n");
    newArray();
    return 0;
}

//→ Faça um programa em C que imprima a matriz completa, usando o comando while.
//Vide layout no anexo. (2 Pontos)
void printMtrx(void)
{
    int i = 0, j = 0;
    while (i < 10)
    {
        printf("%c ", mtrx[i][j]);

        if (j == 9)
        {
            j = 0;
            i++;
            printf("\n");
        } else {
            j++;
        }
    }
}

// Faça um programa em C que copie os dígitos de 0 até 9 da mtrx para um vetor criado
//por você. Utilize do..while. Imprima o vetor de resultado. (3 Pontos)
void copyMtrxNumbers(void)
{
    int i = 0, j = 0, p = 0;
    char n = '0';
    char newArray[10];

    do
    {
        if (mtrx[i][j] == n)
        {
            newArray[p] = mtrx[i][j];
            n++;
            p++;
        }

        if (j == 9)
        {
            j = 0;
            i++;
        } else {
            j++;
        }
    } while (i < 10);

    for (int k = 0; k < 10; k++)
    {
        printf("%c ", newArray[k]);
    }
}


//Faça um programa em C que copie os caracteres da diagonal principal para um vetor
//criado por você. Utilize for. Imprima o vetor de resultado. (3 Pontos)
void printMainDiagonal(void)
{
    char mainDiagonal[10] = {0};

    for (int i = 0; i < 10; i++){
        mainDiagonal[i] = mtrx[i][i];

    }

    for (int k = 0; k < 10; k++)
    {
        printf("%c ", mainDiagonal[k]);
    }
}

//→ Faça um programa em C que utilizando as posições de mtrx copie todas as posições
//listadas abaixo para um novo vetor de char e possibilite que esse vetor seja corretamente
//impresso na tela como um texto através do uso do comando printf mais o formatador %s.
//Lista de posições: [1][5], [2][6], [4][4],[4][4],[3][0] e [3][4] (2 Pontos)
void newArray(void)
{
    char newArray[7] = {mtrx[1][5], mtrx[2][6], mtrx[4][4], mtrx[4][4], mtrx[3][0], mtrx[3][4]};
    newArray[6] = '\0';
    printf("%s", newArray);

}