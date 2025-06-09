#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int num;
    struct node *next; 
} node;

int getLength(node *list);
void insert(node **list, int num, int position);

int main() {
//1. Inicializar a lista (ponteiro para o primeiro nó deve começar como NULL).
    node* list = NULL;
    insert(&list, 1, 1);
    insert(&list, 2, 2);
    insert(&list, 3, 4);
}

void insert(node **list, int num, int position) {
    // por posicao, considera-se que a contagem da lista começa em 1
    // seja uma lista = {1, 2, 3, 4} na qual se deseja adicionar o numero 7 em 2 lugar, temos
    // que lista = {1, 7, 2, 3, 4}

    node *newNode = malloc(sizeof(node));
    if (newNode == NULL) {
        exit(1);
    }
    newNode->num = num;

    if (position == 1) {
        newNode->next = *list;
        *list = newNode;
        return;
    }

    if (getLength(list) < position) {
        printf("A posição escolhida está fora da amplitude da lista.");
        return;
    }

    node *tmp = *list;
    for (int i = 1; i < position - 1; i++) {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

int getLength(node *list) {
    node *tmp = list;
    int length = 0;
    while (tmp != NULL) {
        length++;
        tmp = tmp->next;
    }
    return length;
}
//2. Inserir um novo número em um local específico da lista.
//3. Imprimir todos os números da lista na ordem atual.
//4. Buscar um número na lista e informar se ele está presente ou não.
//5. Remover o primeiro nó que contenha determinado número.