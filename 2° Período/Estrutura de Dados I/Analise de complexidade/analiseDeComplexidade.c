#include <stdio.h>
#include <time.h>
#include <stdlib.h>

double bigOConstante (int n);
double bigOLogaritmica(int n);
double bigOQuasilinear(int n);
double bigOLinear(int n);
double bigOQuadradica(int n);
double bigOExponencial(int n);
double big0Fatorial(int n);

int buscaBinaria(int array[], int tamanho, int alvo);
void merge(int array[], int inicio, int meio, int fim);
void mergeSort(int array[], int inicio, int fim);
int fibonacci(int n);
void trocar(int *a, int *b);
void permutacao(int array[], int inicio, int tamanho);

clock_t inicio, fim;

int main()
{
    double n = 10;
    int t = 0;

    //bigOConstante    
    printf("bigOConstante\n");
    do {
        double tempoGasto = bigOConstante(n);
        printf("Tempo de execucao O(1) com %.0f elementos: %f segundos\n", n, tempoGasto);
        n = n * 5;
        t++;
    } while (t < 3);

    t = 0;
    n = 10000;

    printf("\n\nbigOLogaritmico\n");
    //bigOLogaritmica
    do {
        double tempoGasto = bigOLogaritmica(n);
        printf("Tempo de execucao O(log n) com %.0f elementos: %f segundos\n", n, tempoGasto);
        n = n * 5;
        t++;
    } while (t < 3);

    t = 0;
    n = 10000;

    printf("\n\nbigOQuasilinear\n");
    //bigOQuasilinear
    do {
        double tempoGasto = bigOQuasilinear(n);
        printf("Tempo de execucao O(n log n) com %.0f elementos: %f segundos\n", n, tempoGasto);
        n = n * 5;
        t++;
    } while (t < 3);

    t = 0;
    n = 100000;
    
    //bigOLinear
    printf("\n\nbigOLinear\n");
    do {
        double tempoGasto = bigOLinear(n);
        printf("Tempo de execucao O(n) com %.0f elementos: %f segundos\n", n, tempoGasto);
        n = n + 100000;
        t++;
    } while (t < 3);

    t = 0;
    n = 1000;

    //bigOQuadratica
    printf("\n\nbigOQuadratica\n");
    do {
        double tempoGasto = bigOQuadradica(n);
        printf("Tempo de execucao O(n^2) com %.0f elementos: %f segundos\n", n, tempoGasto);
        n = n * 5;
        t++;
    } while (t < 3);

    t = 0;
    n = 20;

    //bigOExponencial
    printf("\n\nBigOExponencial\n");
    do {
        double tempoGasto = bigOExponencial(n);
        printf("Tempo de execucao O(n^n) com %.0f elementos: %f segundos\n", n, tempoGasto);
        n = n + 10;
        t++;
    } while (t < 3);

    t = 0;
    n = 10;

    //bigOFatorial
    printf("\n\nBigOFatorial\n");
    do {
        double tempoGasto = big0Fatorial(n);
        printf("Tempo de execucao O(n!) com %.0f elementos: %f segundos\n", n, tempoGasto);
        n = n + 1;
        t++;
    } while (t < 3);

    return 0;
}


double bigOConstante (int n) {
    int array[n];
    for (int i = 0; i < n; i++) {
        array[i] = i;
    }
    int index = n - (n / 2);

    inicio = clock();
    array[index];
    fim = clock();

    double tempoGasto = (double)(fim - inicio) / CLOCKS_PER_SEC;
    return tempoGasto;
}

double bigOLogaritmica(int n) {
    int array[n];
    for (int i = 0; i < n; i++) {
        array[i] =  i;
    }
    int alvo = (n / 2) + (n / 4) + (n / 8); // valor teste assegurando que nao sera o melhor caso

    inicio = clock();
    int i = buscaBinaria(array, (sizeof(array) / sizeof(array[0])), alvo);
    fim = clock();
    return (double)(fim - inicio) / CLOCKS_PER_SEC;
}

double bigOQuasilinear(int n) {
    int array[n];
    srand(time(NULL)); 

    for (int i = 0; i < n; i++) {
        array[i] = rand() % 100;
    }
    inicio = clock();
    mergeSort(array, 0, (sizeof(array) / sizeof(array[0])) - 1);
    fim = clock();
    return (double)(fim - inicio) / CLOCKS_PER_SEC;
}

double bigOLinear(int n) {
    int array[n];
    for (int i = 0; i < n; i++) {
        array[i] = i;
    }

    inicio = clock();
    for (int i = 0; i < n; i++) {
        array[i]; //apenas percorre o array, sem fazer nada
    }
    fim = clock();
    return (double)(fim - inicio) / CLOCKS_PER_SEC;
}

double bigOQuadradica(int n) {
    int array[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 1000; // Números aleatórios entre 0 e 999
    }

    inicio = clock();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    fim = clock();
    return (double)(fim - inicio) / CLOCKS_PER_SEC;
}

double bigOExponencial(int n) {
    inicio = clock();
    int resultado = fibonacci(n); 
    fim = clock(); 
    return (double)(fim - inicio) / CLOCKS_PER_SEC;
}

double big0Fatorial(int n) {
    int array[n];
    for (int i = 0; i < n; i++) {
        array[i] = i;
    }
    inicio = clock();
    permutacao(array, 0, (sizeof(array) / sizeof(array[0])));
    fim = clock();
    return (double)(fim - inicio) / CLOCKS_PER_SEC;
}

// binarySearch usada em logaritma
int buscaBinaria(int array[], int tamanho, int alvo) {
    int inicio = 0, fim = tamanho - 1;

    while (inicio <= fim) { 
        int meio = inicio + (fim - inicio) / 2;

        if (array[meio] == alvo)  
            return meio; // Elemento encontrado

        if (array[meio] < alvo)   
            inicio = meio + 1; // Busca na metade direita
        else                      
            fim = meio - 1; // Busca na metade esquerda
    }
    return -1; // Elemento não encontrado
}

// mergeSort usado em Qualinear
void merge(int array[], int inicio, int meio, int fim) {
    int tamanhoEsquerda = meio - inicio + 1;
    int tamanhoDireita = fim - meio;
    int esquerda[tamanhoEsquerda], direita[tamanhoDireita];

    // Copia os elementos para os arrays temporários
    for (int i = 0; i < tamanhoEsquerda; i++)
        esquerda[i] = array[inicio + i];
    for (int i = 0; i < tamanhoDireita; i++)
        direita[i] = array[meio + 1 + i];

    int i = 0, j = 0, k = inicio;
    
    // Mescla os arrays ordenados de volta no array original
    while (i < tamanhoEsquerda && j < tamanhoDireita) {
        if (esquerda[i] <= direita[j])
            array[k++] = esquerda[i++];
        else
            array[k++] = direita[j++];
    }

    while (i < tamanhoEsquerda)
        array[k++] = esquerda[i++];

    while (j < tamanhoDireita)
        array[k++] = direita[j++];
}
void mergeSort(int array[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        mergeSort(array, inicio, meio);
        mergeSort(array, meio + 1, fim);
        merge(array, inicio, meio, fim);
    }
}

// sequencia de fibonacci usada em exponencial
int fibonacci(int n) {
    if (n <= 1) 
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// permutacao usada em fatoral
void permutacao(int array[], int inicio, int tamanho) {
    if (inicio == tamanho) { 
        return;
    } else {
        for (int i = inicio; i < tamanho; i++) {
            trocar(&array[inicio], &array[i]);
            permutacao(array, inicio + 1, tamanho);
            trocar(&array[inicio], &array[i]); // Desfaz a troca
        }
    }
}
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
