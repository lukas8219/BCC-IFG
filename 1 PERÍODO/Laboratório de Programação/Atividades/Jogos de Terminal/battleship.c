#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLUNNS 10
#define MOVESET 25

void setGame(void);
void printBoard(void);
bool isValidMove(char input[]);
int getStatus(void);

char board[ROWS][COLUNNS]; // UI
char fleet[ROWS][COLUNNS] = {{' ', ' ', ' ', ' ', 'W', ' ', ' ', ' ', ' ', ' '},
                             {' ', 'W', ' ', ' ', 'W', ' ', 'W', ' ', ' ', ' '},
                             {' ', 'W', ' ', ' ', 'W', ' ', ' ', ' ', ' ', ' '},
                             {' ', 'W', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                             {' ', 'W', ' ', 'W', ' ', ' ', ' ', 'W', 'W', ' '},
                             {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                             {'W', ' ', 'W', 'W', 'W', ' ', ' ', ' ', ' ', ' '},
                             {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'W', ' '},
                             {' ', ' ', ' ', ' ', 'W', ' ', 'W', ' ', 'W', ' '},
                             {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};
char moveSet = 0;
int points = 0; 
int status = 0;  

int main(void)
{
    setGame();
    char move[3];
    system("cls");
    printBoard();

    do 
    {
        printf("Insira as coordenadas do seu proximo ataque: ");
        gets(move);
        fflush(stdin);

        if (isValidMove(move) == true)
        {
            int row = move[0] - '0';
            int colunn =  move[1] - 'A';
            if (fleet[row][colunn] == 'W')
            {
                fleet[row][colunn] = 'w';
                board[row][colunn] = 'X';
                points++;
                system("cls");
                printf("\a");
                printBoard();
            } else {
                board[row][colunn] = 'O';
                system("cls");
                printBoard();
            }
            moveSet--;
        } else {
            printf("Movimento invalido\n");
        }

        status = getStatus();
        if (status == 1)
        {
            char keepPlaying = '\0';
            printf("Numero maximo de tentativas alcancado.\nDeseja continuar? (y/n)");
            scanf("%c", &keepPlaying);
            fflush(stdin);

            if (keepPlaying == 'y' || keepPlaying == 'Y')
            {
                system("cls");
                setGame();
                printBoard();
            } 
        }

        if (status == 2)
        {
            char keepPlaying = '\0';
            printf("Parabens! Todas as embarcacoes foram antingidas.\nDeseja jogar novamente? (y/n)");
            scanf("%c", &keepPlaying);
            fflush(stdin);

            if (keepPlaying == 'y' || keepPlaying == 'Y')
            {
                system("cls");
                setGame();
                printBoard();
            } 
        }

    } while (status == 0);
    return 0;

}

void setGame(void)
{
    for (int i = 0; i < ROWS; i++) // initialize board
    {
        for (int j = 0; j < COLUNNS; j++)
        {
            board[i][j] = ' ';
        }
    }
    moveSet = MOVESET;
    points = 0;
    status = 0; 
}

void printBoard(void)
{
    int colunns = 0;
    printf("\t\tBATALHA NAVAL\n");
    printf("\nX - navio atinjido \t O - agua\n");

    printf("\n    A | B | C | D | E | F | G | H | I | J |");
    for (int i = 0; i < ROWS; i++)
    {
        printf("\n%d |", colunns);
            
        for (int j = 0; j < COLUNNS; j++)
        {
           printf(" %c |", board[i][j]);
        }
        colunns++;
    }
    printf("\n\t\tPontos: %d", points);
    printf("\n\nVoce tem mais %d jogadas\n", moveSet);
}

bool isValidMove(char input[])
{
    if ((input[0] >= '0' && input[0] <= '9') && (input[1] >= 'A' && input[1] <= 'J'))
        return true;
    return false;
}

int getStatus(void)
{
    if (points == 17)
        return 2;
    if (moveSet == -1)
        return 1;
    return 0;
}
