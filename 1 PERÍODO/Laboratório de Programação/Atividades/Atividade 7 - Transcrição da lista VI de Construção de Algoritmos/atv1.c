#include <stdio.h>

//01) Faça um algoritmo para ler e armazenar em um vetor a temperatura de todos os dias do
//ano. Em seguida, faça uma função para cada tarefa:
//a) Informar a menor temperatura do ano;
//b) Informar a maior temperatura do ano;
//c) Informar a temperatura média anual;
//d) Informar o número de dias do ano em que a temperatura foi acima da média anual.

#define DAYS 365

float lowerTemp(float year[]);
float higherTemp(float year[]);
float averageTemp(float year[]);
void daysAboveAvarageTemp(float year[], float avarageTemp);

int main(void)
{
    float daysOfYear[DAYS];

    printf("Insira a temperatura dos dias do ano: ");
    for (int i = 0; i < DAYS; i++)
    {
        scanf("%f", &daysOfYear[i]);
    }

    printf("Menor temperatura: %2.f\n", lowerTemp(daysOfYear));
    printf("Maior temperatura: %2.f\n", higherTemp(daysOfYear));
    printf("Temperatura media: %2.f\n", averageTemp(daysOfYear));
    printf("\nDias acima da temperatura media: \n");
    daysAboveAvarageTemp(daysOfYear, averageTemp(daysOfYear));

    return 0;
}

float lowerTemp(float year[])
{
    float lowerTemp = year[0];
    for (int i = 0; i < DAYS; i++)
    {
        if (lowerTemp > year[i])
        {
            lowerTemp = year[i];
        }
    }
    return lowerTemp;
}

float higherTemp(float year[])
{
    float higherTemp = year[0];
    for (int i = 0; i < DAYS; i++)
    {
        if (higherTemp < year[i])
        {
            higherTemp = year[i];;
        }
    }
    return higherTemp;
}

float averageTemp(float year[])
{
    float avarage = 0;
    for (int i = 0; i < DAYS; i++)
    {
        avarage += year[i];
    }
    avarage = avarage / DAYS;
    return avarage;
}

void daysAboveAvarageTemp(float year[], float avarageTemp)
{
    for (int i = 0; i < DAYS; i++)
    {
        if (year[i] > avarageTemp)
        {
            printf("Dia %i:  %2.f\n", i, year[i]);
        }
    }
}