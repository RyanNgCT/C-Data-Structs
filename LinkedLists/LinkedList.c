#include "LinkedList.h"
#include <stdio.h>

void printList(node_t* head) {
    node_t* temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->value);
        temp = temp-> next;
    }
    printf("\n");
}

node_t* createNewNode(int val) {
    node_t* newNode = malloc(sizeof(node_t));
    newNode->value = val;
    newNode->next = NULL;
    return newNode;
}