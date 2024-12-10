#include <stdio.h>

//03) Desenvolva um algoritmo recursivo para encontrar o número de vezes que a sequência “acgt” aparece em
//uma string (vetor de caracteres) e quais os índices no vetor em que a sequência ocorre. O vetor tem tamanho
//igual a 1000

int found(char vetor[], int index);

int main(void)
{
    char vetor[1001]= "acgtacgtacgtacgtacgtacgtacgtacgtacgtacgtacgtacgtacgtacgtacgttacgcatggcttccgtgttaggctaggccatgcgctgtgcatgtggtgtccaggcgatgctggctacgttgcatgctgtttggccgattgctagcgctagggcagctgtggggtggtgcatgtctgcgttttacgtgcttgactgcaaggcgtagtgcgtttcgcatgtggatggcattgcagctgcagctgtgcaagctggtcggctagtctgggtagctggtgccaggtgtttgcgtagcagcttagctgggtgcatgcgctagctggatggcgttgcatgttgcagttgcaggtttagggcgctaggctgagctttaggcgtggtacgtttgggtagctgggcgggcgtgcgcgttggttagtctgctggatgctggtgggtgcgttgttttgcttaggggcatctggtgtgggctgttacgtagggtgttacggcatggtggtggttgcagtttggttgcttgtgggctagctgcatgcatgcgtttagctggtgtttgcgggtggtgcgtgcgtgcatgggttgtcagtttacgttgctgtggcagttgtagctgagctgttggggcatgctgcgtgctgggtagcttggttgcatgttgtgcatagctgcggtagctttaggtgctggggtagtaggctagtagggctgggtggctacgtacgtacgtacgtacgtacgtacgtacgtacgtacgtacgtacgtacgtacgtacgt";
    printf("%d\n", found(vetor, 0));
}

int found(char vetor[], int index)
{
    if (vetor[index] == '\0')
        return 0;

    if (vetor[index] == 'a' && vetor[index + 1] == 'c' && vetor[index + 2] == 'g' && vetor[index + 3] == 't') {
        return 1 + found(vetor, index + 1); 
    }

    return found(vetor, index + 1); 
}
