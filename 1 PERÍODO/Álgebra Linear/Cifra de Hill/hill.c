#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

const int key[2][2] = {{3, 1}, {5, 2}};
const int inverseKey[2][2] = {{2, -1}, {-5, 3}};

char plainText[100];
char cipherText[100] = "PTRVRILWWMUN4W";
int length = 0; 

void applyHillCipher(void);
void applyHillDecryption (void);

int main(void)
{
    applyHillDecryption();
    printf("%s", plainText);
}

void applyHillCipher(void)
{
    int i, j = 0;
    for (i = 0; i < strlen(plainText); i++) {
        if (isalnum(plainText[i])) {
            cipherText[j] = toupper(plainText[i]);
            j++;
        }
    }
    cipherText[j] = '\0';
    length = strlen(cipherText);

    char tmp1, tmp2;
    for (int i = 0; i < length; i += 2)
    {
        tmp1 = ((cipherText[i] - 'A') * key[0][0]) + ((cipherText[i + 1] - 'A') * key[0][1]);
        tmp1 %= 26; 

        tmp2 = ((cipherText[i] - 'A') * key[1][0]) + ((cipherText[i + 1] - 'A') * key[1][1]);
        tmp2 %= 26; 

        cipherText[i] = tmp1 + 'A';
        cipherText[i + 1] = tmp2 + 'A';
    }
}

void applyHillDecryption (void)
{
    int i, j = 0;
    for (i = 0; i < strlen(cipherText); i++) {
        if (isalnum(cipherText[i])) {
            plainText[j] = toupper(cipherText[i]);
            j++;
        }
    }
    plainText[j] = '\0';
    length = strlen(plainText);

    char tmp1, tmp2;
    for (int i = 0; i < length; i += 2)
    {
        tmp1 = (((plainText[i] - 'A') * inverseKey[0][0]) + ((plainText[i + 1] - 'A') * inverseKey[0][1])) + 26;
        tmp1 %= 26; 

        tmp2 = (((plainText[i] - 'A') * inverseKey[1][0]) + ((plainText[i + 1] - 'A') * inverseKey[1][1])) + 26;
        tmp2 %= 26; 

        plainText[i] = tmp1 + 'A';
        plainText[i + 1] = tmp2 + 'A';
    }
}
