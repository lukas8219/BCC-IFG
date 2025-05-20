// Karolayne Amabile Brito Borges
// 3° P - Ciência da Computação
// Estruturas de Dados II - Atividade Avaliada 1

#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *prox;
} No;

void inserirFim(No **inicio, int valor);
void inserirInicio(No **inicio, int valor);
void imprimirLista(No *inicio);

int main(void) {
    No *lista = NULL;
    
    inserirInicio(&lista, 10);
    inserirInicio(&lista, 8);
    inserirFim(&lista, 30);
    inserirFim(&lista, 40);
    imprimirLista(lista);
    return 0;
}

void inserirInicio(No **inicio, int valor) {
    No *novo = malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = *inicio;
    *inicio = novo;
}

void inserirFim(No **inicio, int valor) {
    No *novo = malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = NULL;

    if (*inicio == NULL) {
        *inicio = novo;
        // seria preciso adicionar a linha abaixo, para garantir o codigo nao entrasse no proximo while
        // return;
    }

    No *atual = *inicio;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }
    atual->prox = novo;
}

void imprimirLista(No *inicio) {
    // aqui ou poderiamos alterar a declaracao da funcao para receber um ponteiro de ponteiro
    // void imprimirLista(No **inicio)
    // ou prosseguir como fiz abaixo, retirando o * de inicio
    No *atual = inicio;
    printf("Lista:\n");
    while (atual != NULL) {
        printf("%d -> ", atual->valor);
        atual = atual->prox;
    }
}