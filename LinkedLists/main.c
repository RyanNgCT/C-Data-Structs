#include "LinkedList.h"
#include <stdio.h>

int main() {
    node_t* head;
    node_t* tmp;
    node_t n1, n2, n3;

    tmp = createNewNode(10);

    n1.value = 45;
    n2.value = 8;
    n3.value = 32;

    head = tmp;
    head->next = &n3;
    n3.next = &n2; 
    n2.next = &n1;
    n1.next = NULL;

    printNode(head);

    head = head -> next;

    printNode(head);
    
    return 0;
}