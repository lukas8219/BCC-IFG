#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h> 

#define ROWS 10
#define COLUMNS 10
#define MOVESET 25 // maximum number of moves allowed

// functions
void setGame(void);
bool isValidPosition(int x, int y, int direction, int length);
void printBoard(void);
bool isValidMove(char input[]);
int getStatus(void);
void printTemplate(void);

// global variables 
char board[ROWS][COLUMNS]; // visible board (UI)
char shipBoard[ROWS][COLUMNS] = {0}; // board representing ship locations

char remainingMoves = 0; // remaining moves
int hitCount = 0; // player score 
int gameStatus = 0; // (0 - ongoing, 1 - game over, 2 - victory)

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

        // validate the move
        if (isValidMove(move) == true)
        {
            int row = move[0] - '0'; // get the actually x and y in integers 
            int column =  move[1] - 'A';

            // check if the move hits a ship ('W')
            if (shipBoard[row][column] == 'W')
            {
                shipBoard[row][column] = 'w'; // mark the ship as hit
                board[row][column] = 'X'; // visual representation of a hit
                hitCount++;
                system("cls");
                printf("\a");
                printBoard();
            } else { // if player didnt hit a ship
                board[row][column] = 'O'; // visual representation of a miss
                system("cls");
                printBoard();
            }
            remainingMoves--;
        } else {
            printf("Movimento invalido\n");
        }

        // check game status
        gameStatus = getStatus();

        if (gameStatus == 1) // meaning there's no more moves allowed  
        {
            char keepPlaying = '\0';
            printTemplate();
            printf("\nNumero maximo de tentativas alcancado.\nDeseja continuar? (y/n)");
            scanf("%c", &keepPlaying);
            fflush(stdin);

            if (keepPlaying == 'y' || keepPlaying == 'Y')
            {
                system("cls");
                setGame();
                printBoard();
            } 
        }

        if (gameStatus == 2) // if the player has hit all ships
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

    } while (gameStatus == 0);
    getch();
    return 0;
}

void setGame(void)
{
    for (int i = 0; i < ROWS; i++) // initialize UI board
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            board[i][j] = ' ';
        }
    }

    remainingMoves = MOVESET; 
    hitCount = 0;
    gameStatus = 0; 

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++) 
        {
            shipBoard[i][j] = ' ';  // initialize the fleet board with empty spaces
        }
    }

    int fleet[4][4] = {{1, 4}, {2, 3}, {1, 2}, {5, 1}}; // ship count and lengths
    // ship count  1   2   1   5 
    // length      4   2   2   1

    srand(time(NULL));
    
    // place each ship on the board
    for (int i = 0; i < 4; i++) 
    {
        while (fleet[i][0] != 0)
        {
            int x = rand() % 10;
            int y = rand() % 10;
            int direction = x % 2;  // random direction (0 - vertical, 1 - horizontal)

            if (direction == 0) // vertically
            {
                if (y + fleet[i][1] < 10) 
                {
                    if(isValidPosition(x, y, direction, fleet[i][1])) 
                    {
                        for (int j = 0; j < fleet[i][1]; j++) 
                        {
                            shipBoard[x][y + j] = 'W';
                        }
                        fleet[i][0]--;
                    }
                }
            } else { // horizontally
                if (x + fleet[i][1] < 10) 
                {
                    if(isValidPosition(x, y, direction, fleet[i][1])) 
                    {
                        for (int j = 0; j < fleet[i][1]; j++) 
                        {
                            shipBoard[x + j][y] = 'W';
                        }
                        fleet[i][0]--;
                    }
                }
            }
        }
    }
}


// checks if the given position is valid for placing a ship
bool isValidPosition(int x, int y, int direction, int length)
{
    if (direction == 0) 
    {
        for(int i = 0; i < length; i++)
        {
            if(shipBoard[x][y + i] != ' ') 
            {
                return false;  // invalid if the position is already occupied
            }
        }
    } else { 
        for(int i = 0; i < length; i++)
        {
            if(shipBoard[x + i][y] != ' ') 
            {
                return false; 
            }
        } 
    }
    return true;
}

void printBoard(void)
{
    int columns = 0;
    printf("\t\tBATALHA NAVAL\n");
    printf("\nX - navio atinjido \t O - agua\n");

    printf("\n    A | B | C | D | E | F | G | H | I | J |");
    for (int i = 0; i < ROWS; i++)
    {
        printf("\n%d |", columns); // print row number 
            
        for (int j = 0; j < COLUMNS; j++)
        {
           printf(" %c |", board[i][j]);
        }
        columns++;
    }
    printf("\n\t\tPontos: %d", hitCount);
    printf("\n\nVoce tem mais %d jogadas\n", remainingMoves);
}

bool isValidMove(char input[])
{
    if ((input[0] >= '0' && input[0] <= '9') && (input[1] >= 'A' && input[1] <= 'J'))
        return true;
    return false;
}

int getStatus(void)
{
    if (hitCount == 17) // all ships hit
        return 2;
    if (remainingMoves == -1) // no moves left
        return 1;
    return 0; // game is still ongoing
}

void printTemplate(void)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            if (board[i][j] == ' ')
            {
                board[i][j] = shipBoard[i][j];
            }
        }
    }
    printf("\n\t\tGABARITO\n\tNavios nao antingidos - W\n");
    printf("\n    A | B | C | D | E | F | G | H | I | J |");

    int columns = 0;
    for (int i = 0; i < ROWS; i++)
    {
        printf("\n%d |", columns); // print row number 
            
        for (int j = 0; j < COLUMNS; j++)
        {
           printf(" %c |", board[i][j]);
        }
        columns++;
    }
}