#include <stdio.h>

#define LENGTH 4

int main(void)
{
    int array[LENGTH] = {3, 2, 1, 0};
    int tmp = 0;

    for (int i = 0; i < LENGTH; i++)
    {
        for (int j = 0; j <= LENGTH; j++)
        {
            if (array[j] > array[i + 1])
            {
                tmp = array[j];
                array[j] = array[i + 1];
                array[i + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%i", array[i]);
    }
    return 0;
}