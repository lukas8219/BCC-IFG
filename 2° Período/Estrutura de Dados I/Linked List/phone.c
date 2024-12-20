#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int n;
    struct node *next;
} node;

void print (node *list);
node* add(node *list, int n);
node* delete (node *list, int n);

int main(void) {

    node *list = NULL;
    for (int i = 0; i < 10; i++)
    {
        list = add(list, i + 1);
    }
    print(list);
    list = delete(list, 6);
    print(list);
}

void print (node *list) {
    node *ptr = list;
    while (ptr != NULL) {
        printf("%d ", ptr->n);
        ptr = ptr->next;
    }
}

node* add(node *list, int n) {
    node *newNode = malloc(sizeof(node));
    newNode->n = n;

    newNode->next = list;
    list = newNode;
    return list;
}

node* delete (node *list, int n) {
    node *ptr = list;

    if (ptr->n == n) {
        list = list->next;
        free(ptr);
        return list;
    }

    while (ptr != NULL && ptr->next != NULL) {
        if (ptr->next->n == n) {
            node *temp = ptr->next;
            ptr->next = temp->next;
            free(temp);
        } else {
            ptr = ptr->next;
        }
    }
    return list;
}