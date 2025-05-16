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
    }

    No *atual = *inicio;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }
    atual->prox = novo;
}

void imprimirLista(No *inicio) {
    No *atual = inicio;
    printf("Lista:\n");
    while (atual != NULL) {
        printf("%d -> ", atual->valor);
        atual = atual->prox;
    }
}