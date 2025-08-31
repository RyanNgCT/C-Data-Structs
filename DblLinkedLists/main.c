#include "DoubleLinkedList.h"
#include <stdio.h>

int main() {
    node_t* head;
    node_t* new;
    init(&head);

    for(int i = 1; i <= 10; i++) {
        new = createNewNode(i);
        // insertAtHead(&head, new);
        insertAtTail(&head, new);
    }

    printf("Before: ");
    printList(head);
    insertAtHead(&head, createNewNode(11));

    printf("Inserted 11 at head: ");
    printList(head);

    node_t* toDel = findNode(head, 7);

    deleteNode(&head, toDel);
    printf("After deleting node: ");
    printList(head);

    node_t* curr = head;
    while (curr != NULL) {
        node_t* temp = curr;
        curr = curr->next;
        free(temp);
    }

    return 0;
}