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

node_t* insertAtHead(node_t** head, node_t* toInsert) {
    toInsert->next = *head;
    *head = toInsert;
    return toInsert;
}

node_t* insertAtTail(node_t** head, node_t* toInsert) {
    if (*head == NULL) {
        *head = toInsert;
    }
    else {
        node_t* tmp = *head;
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = toInsert;
    }
    return toInsert;
}

void insertAfterNode(node_t* target, node_t* toInsert) {
    toInsert->next = target->next;
    target->next = toInsert;
}

node_t* findNode(node_t* head, int val) {
    node_t* tmp = head;
    while (tmp != NULL) {
        if (tmp->value == val) {
            return tmp;
        }
        tmp = tmp->next;
    }
    return NULL;
}