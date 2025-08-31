#include "DoubleLinkedList.h"
#include <stdio.h>

void init(node_t** head) {
    *head = NULL;
    return;
}

void printList(node_t* head) {
    node_t* temp = head;

    while (temp != NULL) {
        printf("%d <-> ", temp->value);
        temp = temp-> next;
    }
    printf("\n");
    return;
}

node_t* createNewNode(int val) {
    node_t* newNode = malloc(sizeof(node_t));
    newNode->value = val;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

node_t* insertAtHead(node_t** head, node_t* toInsert) {
    toInsert->next = *head;
    if (*head != NULL) {
        (*head)->prev = toInsert;
    }
    *head = toInsert;
    return toInsert;
}

void insertAtTail(node_t** head, node_t* toInsert) {
    if (*head == NULL) {
        *head = toInsert;
        toInsert->prev = NULL;
    }
    else {
        node_t* tmp = *head;
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = toInsert;
        toInsert->prev = tmp;
    }
    return;
}

void insertAfterNode(node_t* target, node_t* toInsert) {
    toInsert->next = target->next;
    if (toInsert->next != NULL) {
        toInsert->next->prev = target;
    }
    toInsert->prev = target;
    target->next = toInsert;
    return;
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

void deleteNode(node_t** head, node_t* toDelete) {
    if (*head == NULL) {
        return;
    }
    else if (*head == toDelete) {
        *head = toDelete->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
    }
    else {
        toDelete->prev->next = toDelete->next;
        if (toDelete->next != NULL) {
            toDelete->next->prev = toDelete-> prev;
        }
    }
    // cleanup
    toDelete->next = NULL;
    toDelete->prev = NULL; 
    free(toDelete);
    return;
}