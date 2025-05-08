#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int n;
    struct node *next; 
} node;

node* inserirInicio(node *list, int n);
void imprimirLista (node *list);
void liberarList(node *list);
node* inicializarList(node *list);
node* inserirFim(node *list, int n);
node* inserirPosicao(node *list, int n, int posicao);

int main (void) {
    node *list = inicializarList(list);

    printf("Exercicio 1: ");
    list = inserirInicio(list, 10);
    list = inserirInicio(list, 20);
    list = inserirInicio(list, 30);
    imprimirLista(list);
    liberarList(list);

    // se nao usarmos inicializarList, o antigo conteudo permanece la
    // mesmo usando free, por dois pontos:
    // free nao apaga memoria, apenas indica ao sistema que aquele pedaço pode ser usado
    // list é um ponteiro do tipo node que continua apontado para aquele segmento na memoria

    printf("Exercicio 2: ");
    list = inicializarList(list);
    list = inserirFim(list, 5);
    list = inserirFim(list, 15);
    list = inserirFim(list, 25);
    imprimirLista(list);
    liberarList(list);

    printf("Exercicio 3: ");
    list = inicializarList(list);
    list = inserirPosicao(list, 10, 0);
    list = inserirPosicao(list, 30, 1);
    list = inserirPosicao(list, 20, 1);
    imprimirLista(list);
    liberarList(list);
}

/*1: Implemente uma estrutura de dados para representar uma lista encadeada de inteiros e crie uma
função inicializarLista() que retorne uma lista vazia.
Objetivo: Praticar a definição da struct e criação da lista.*/
node* inicializarList(node *list) {
    return NULL;
}

/*2: Implemente a função imprimirLista(Lista *lista) para exibir os elementos.*/
void imprimirLista (node *list) {
    node *aux = list;
    if (aux == NULL) {
        exit(1);
    }

    while (aux != NULL) {
        printf("%d -> ", aux->n);
        aux = aux->next;
    }
    printf("\n");
}

/*2.5: Depois, crie liberarLista(Lista *lista) para liberar toda a memória alocada.
No main(), insira alguns valores, imprima a lista e depois libere-a corretamente*/
void liberarList(node *list) {
    node *aux;

    while (list != NULL) {
        aux = list;
        list = list->next;
        free(aux);
    }
}

/*3: Implemente uma função inserirInicio(Lista *lista, int valor) que insere um novo nó no início da lista.
Depois, no main(), insira os valores 10, 20 e 30 e imprima a lista.
Saída esperada: 30 -> 20 -> 10 -> NULL*/
node* inserirInicio(node *list, int n) {
    node *aux = malloc(sizeof(node));
    if (aux == NULL) {
        exit(1);
    }
    aux->n = n;
    aux->next = list;
    list = aux;
    return list;
}

/*4: Inserir no fim Implemente a função inserirFim(Lista *lista, int valor) e insira os valores 5, 15, 25.
Imprima a lista. Saída esperada: 5 -> 15 -> 25 -> NULL*/
node* inserirFim(node *list, int n) {
    node *newNode = malloc(sizeof(node));
    if (newNode == NULL) {
        exit(1);
    }
    newNode->n = n;
    newNode->next = NULL;

    if (list == NULL) {
        return newNode;
    }

//     aux
//[1]  [2]  [3]
//[->] [->] [NULL]
    node *aux = list;
    while (aux->next != NULL) {
        aux = aux->next;
    }
    aux->next = newNode;
    return list;
}

/*5: Inserir na posição
Crie a função inserirPosicao(Lista *lista, int valor, int posicao), que insere um valor na posição
desejada da lista (0 = início).
Insira os valores na ordem:
• 10 na posição 0
• 30 na posição 1
• 20 na posição 1
Saída esperada: 10 -> 20 -> 30 -> NULL*/
node* inserirPosicao(node *list, int n, int posicao) {
    // funcao insegura ppois nao estammos testando se a posicao é mrnor que o tamanho da lista
    // ver isso depois 
    node *newNode = malloc(sizeof(node));
    if (newNode == NULL) {
        exit(1);
    }
    newNode->n = n;
    newNode->next = NULL;

    if (posicao == 0) {
        newNode->next = list;
        list = newNode;
        return list;
    }

    node *aux = list;  
    for (int i = 0; i < posicao - 1; i++) 
    {
        aux = aux->next;
    }

    newNode->next = aux->next;
    aux->next = newNode;
    return list;
}
















