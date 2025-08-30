#include "LinkedList.h"
#include <stdio.h>

int main() {
    node_t* head = NULL;
    node_t* new;
    for(int i = 0; i <= 20; i++) {
        new = createNewNode(i);
        // insertAtHead(&head, new);
        insertAtTail(&head, new);
    }

    printf("Before: ");
    printList(head);
    
    node_t* elementToFind = findNode(head, 16);
    printf("%d\n", elementToFind->value);

    insertAfterNode(elementToFind, createNewNode(88));

    printf("\nAfter: ");
    printList(head);

    node_t* curr = head;
    while (curr != NULL) {
        node_t* temp = curr;
        curr = curr->next;
        free(temp);
    }
    return 0;
}