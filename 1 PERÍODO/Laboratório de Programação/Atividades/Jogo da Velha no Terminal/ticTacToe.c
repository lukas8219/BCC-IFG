#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 

void printBoard(char board[3][3]);
int getStatus(char board[3][3]);

int main(void)
{
    char board[3][3] = {{'1', '2', '3'}, 
                        {'4', '5', '6'}, 
                        {'7', '8', '9'}};
    
    int status = 0, player = 1, validInput = 0;
    char move = 0;
    system("cls");
    printBoard(board);

    do
    {
        printf("Jogador %d, digite um numero: ", player);
        scanf("%c", &move);
        fflush(stdin); // just to make sure game will working well

        validInput = 1;
        if (move >= '1' & move <= '9') // move is a valid input?
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (move == board[i][j]) // if move hasnt been chosen
                    {
                        validInput = 0;
                        if (player == 1)
                        {
                            board[i][j] = 'X';
                            player = 2;
                            system("cls");
                            printBoard(board); 
                        } else {
                            board[i][j] = 'O';
                            player = 1;
                            system("cls");
                            printBoard(board);
                        }
                    }
                }
            }
            if (validInput == 1) // means that this space has already been filled
            {
                printf("Movimento invalido. ");
            }
        } else { // case move is not a valid input
            printf("Movimento invalido. \n");
        }
    
        status = getStatus(board);
        if (status == 1 || status == 2) {
            printf("Parabens, jogador %d! Voce ganhou!", status);
        }
        if (status == 3) {
            printf("Empate!\n");
        }
    } while (status == 0);
    
    getch();
    return 0;
}

void printBoard(char board[3][3])
{
    printf("\n\tJogo da Velha\n\n");
    printf("Jogador 1 (X) - Jogador 2 (O)\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", board[0][0], board[0][1], board[0][2]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", board[1][0], board[1][1], board[1][2]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", board[2][0], board[2][1], board[2][2]);
    printf("     |     |     \n");
}

int getStatus(char board[3][3])
{
    // determines the current state of the game
    // 0 = keep playing  
    // 1 = player 1 won
    // 2 = player 2 won
    // 3 = draw

    // check rows and columns 
    for (int i = 0; i < 3; i++) 
    {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) 
        || (board[0][i] == board[1][i] && board[1][i] == board[2][i])) {
            if (board[i][0] == 'X' && board[0][i] == 'X') {
                return 1;
            } else {
                return 2;
            }
        }
    }
    // check main diagonal and secondary diagnol
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) 
    || (board[2][0] == board[1][1] && board[1][1] == board[0][2])) {
        if (board[0][0] == 'X' && board[2][0] == 'X') {
            return 1;
        } else {
            return 2;
        }
    }
    // check if there are still empty spaces
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(board[i][j] != 'X' & board[i][j] != 'O')
            {
                return 0;
            }
        }
    }
    return 3;
}

