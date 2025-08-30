#include "LinkedList.h"
#include <stdio.h>

int main() {
    node_t* head = NULL;
    node_t* new;
    for(int i = 0; i <= 20; i++) {
        new = createNewNode(i);
        if (head == NULL) {
            head = new;
        }
        else {
            node_t* tmp = head;
            while (tmp->next != NULL) {
                tmp = tmp->next;
            }
            tmp->next = new;
        }
    }
    printList(head);

    node_t* curr = head;
    while (curr != NULL) {
        node_t* temp = curr;
        curr = curr->next;
        free(temp);
    }
    return 0;
}