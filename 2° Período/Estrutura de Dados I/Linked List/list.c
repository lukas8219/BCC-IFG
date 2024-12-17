#include <stdio.h>
#include <stdlib.h>

// basic node definition: a node holds an integer value and a pointer to the next node
typedef struct node {
    int n;
    struct node *next;
} node;

int main(void)
{
    // a singly linked list is created by connecting nodes in sequence
    // when the list is empty, it points to NULL
    node *list = NULL;

    // let's add 10 elements to the list, creating a stack-like structure
    // we will insert elements at the beginning, simulating a "last in, first out" structure
    for (int i = 0; i < 10; i++)
    {
        // allocate memory for a new node
        node *ptr = malloc(sizeof(node));

        // ensure memory allocation was successful
        if (ptr == NULL) {
            return 1;
        }

        // insert the new element at the front of the list
        ptr->n = i + 1;
        ptr->next = list;
        list = ptr;
    }
    
    // let's print the list to see if the elements were added correctly
    // we use a temporary pointer to traverse the list from the beginning
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%d ", ptr->n);
        ptr = ptr->next;
    }
    printf("\n");
    // expected output: 10 9 8 7 6 5 4 3 2 1

    // now let's delete the first 5 elements (from 10 to 6)
    // since we are removing from the front, we only need to update the head of the list
    for (ptr = list; ptr != NULL && ptr->n > 5; )
    {
        list = list->next;   // move the head to the next element
        free(ptr);           // free memory of the removed node
        ptr = list;          // update the pointer
    }

    // let's print the list again to see if the deletion worked
    ptr = list;
    while (ptr != NULL)
    {
        printf("%d ", ptr->n);
        ptr = ptr->next;
    }
    printf("\n");
    // expected output: 5 4 3 2 1

    // even though a linked list is often used as a stack, we can insert elements in between nodes
    // let's insert the number 1 between every existing node in the list
    ptr = list;
    while (ptr != NULL) {
        // allocate memory for a new node
        node *newOne = malloc(sizeof(node));
        if (newOne == NULL) {
            return 1;
        }

        // set the new node's value and adjust the links
        newOne->n = 1;
        newOne->next = ptr->next;
        ptr->next = newOne;

        // skip to the next original node
        ptr = newOne->next;
    }

    // let's print the list after insertion
    ptr = list;
    while (ptr != NULL)
    {
        printf("%d ", ptr->n);
        ptr = ptr->next;
    }
    printf("\n");
    // expected output: 5 1 4 1 3 1 2 1 1 1

    // now, let's delete all elements that are not equal to 1
    // since our list starts with 5, we need to check the first node separately
    while (list != NULL && list->n != 1) {
        ptr = list;
        list = list->next;
        free(ptr);  // free memory of removed nodes
    }

    // use a loop to remove all remaining nodes that are not equal to 1
    ptr = list;
    while (ptr != NULL && ptr->next != NULL) {
        if (ptr->next->n != 1) {
            node *temp = ptr->next;    // hold the node to be deleted
            ptr->next = temp->next;   // skip the unwanted node
            free(temp);                // free memory
        } else {
            ptr = ptr->next;  // move to the next node if it's 1
        }
    }

    // print the final list to confirm only 1's remain
    ptr = list;
    while (ptr != NULL)
    {
        printf("%d ", ptr->n);
        ptr = ptr->next;
    }
    printf("\n");
    // expected output: 1 1 1 1 1

    return 0;
}
