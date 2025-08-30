#include "LinkedList.h"
#include <stdio.h>

int main() {
    node_t* head;
    init(&head);
    
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

    node_t* secondNode = createNewNode(88);
    insertAfterNode(elementToFind, secondNode);

    printf("\nAfter addition: ");
    printList(head);

    deleteNode(&head, secondNode);
    printf("\nAfter deletion: ");
    printList(head);

    node_t* curr = head;
    while (curr != NULL) {
        node_t* temp = curr;
        curr = curr->next;
        free(temp);
    }
    return 0;
}