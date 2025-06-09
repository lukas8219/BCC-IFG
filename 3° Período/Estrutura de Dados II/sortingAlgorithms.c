#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArray(int array[], int size);
void selectionSort(int array[], int size);
void printArray(int array[], int size);
void bubbleSort(int array[], int size);
void insertionSort(int array[], int size);

clock_t start, end;
double elapsed_time;

int main(void) {
    int arrayA[10];
    int arrayB[1000];
    int arrayC[100000];

    printf("SELECTION SORT:\n");
    fillArray(arrayA, 10);
    selectionSort(arrayA, 10);
    fillArray(arrayB, 1000);
    selectionSort(arrayB, 1000);
    fillArray(arrayC, 100000);
    selectionSort(arrayC, 100000);

    printf("\nBUBBLE SORT:\n");
    fillArray(arrayA, 10);
    bubbleSort(arrayA, 10);
    fillArray(arrayB, 1000);
    bubbleSort(arrayB, 1000);
    fillArray(arrayC, 100000);
    bubbleSort(arrayC, 100000);

    printf("\nINSECTION SORT:\n");
    fillArray(arrayA, 10);
    insertionSort(arrayA, 10);
    fillArray(arrayB, 1000);
    insertionSort(arrayB, 1000);
    fillArray(arrayC, 100000);
    insertionSort(arrayC, 100000);

    return 0;
}

void fillArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void selectionSort(int array[], int size) {
    start = clock();
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        int tmp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = tmp;
    }
    end = clock();
    elapsed_time = (double)(end - start) / (CLOCKS_PER_SEC/1000);
    printf("Tempo gasto: %.2fms com %i elementos\n", elapsed_time, size);
}

void bubbleSort(int array[], int size) {
    start = clock();
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
    end = clock();
    elapsed_time = (double)(end - start) / (CLOCKS_PER_SEC/1000);
    printf("Tempo gasto: %.2fms com %i elementos\n", elapsed_time, size);
}

void insertionSort(int array[], int size) {
    start = clock();
    for (int i = 1; i < size; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
    end = clock();
    elapsed_time = (double)(end - start) / (CLOCKS_PER_SEC/1000);
    printf("Tempo gasto: %.2fms com %i elementos\n", elapsed_time, size);
}
