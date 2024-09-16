#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h> 

#define ROWS 10
#define COLUNNS 10
#define MOVESET 25

void setGame(void);
bool isValidPosition(int x, int y, int direction, int length);
void printBoard(void);
bool isValidMove(char input[]);
int getStatus(void);

char board[ROWS][COLUNNS]; // UI
char fleetBoard[ROWS][COLUNNS] = {0};

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
            if (fleetBoard[row][colunn] == 'W')
            {
                fleetBoard[row][colunn] = 'w';
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
    getch();
    return 0;
}

void setGame(void)
{
    for (int i = 0; i < ROWS; i++) // initialize UI board
    {
        for (int j = 0; j < COLUNNS; j++)
        {
            board[i][j] = ' ';
        }
    }
    moveSet = MOVESET;
    points = 0;
    status = 0; 

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUNNS; j++) 
        {
            fleetBoard[i][j] = ' ';  // Inicializa com espaços em branco
        }
    }

    int fleet[4][4] = {{1, 4}, {2, 3}, {1, 2}, {5, 1}}; // qntd and length of each ship
    srand(time(NULL));
    
    for (int i = 0; i < 4; i++) // acess to qntd 
    {
        while (fleet[i][0] != 0)
        {
            int x = rand() % 10;
            int y = rand() % 10;
            int direction = x % 2;

            if (direction == 0) // crescimento vertifical
            {
                if (y + fleet[i][1] < 10) // respeitando o limite do tabuleiro
                {
                    if(isValidPosition(x, y, direction, fleet[i][1])) // tem algo atrapalhando?
                    {
                        for (int j = 0; j < fleet[i][1]; j++) // vamos marcar as casas do tamanho do navio
                        {
                            fleetBoard[x][y + j] = 'W';
                        }
                        fleet[i][0]--;
                    }
                }
            } else {
                if (x + fleet[i][1] < 10) // respeitando o limite do tabuleiro
                {
                    if(isValidPosition(x, y, direction, fleet[i][1])) // tem algo atrapalhando?
                    {
                        for (int j = 0; j < fleet[i][1]; j++) // vamos marcar as casas do tamanho do navio
                        {
                            fleetBoard[x + j][y] = 'W';
                        }
                        fleet[i][0]--;
                    }
                }
            }
        }
    }
}

bool isValidPosition(int x, int y, int direction, int length)
{
    if (direction == 0) // vertical
    {
        for(int i = 0; i < length; i++)
        {
            if(fleetBoard[x][y + i] != ' ') 
            {
                return false; // se já houver outra embarcacao no caminho
            }
        }
    } else { // horizontal
        for(int i = 0; i < length; i++)
        {
            if(fleetBoard[x + i][y] != ' ') 
            {
                return false; // se já houver outra embarcacao no caminho
            }
        } 
    }
    return true;
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
