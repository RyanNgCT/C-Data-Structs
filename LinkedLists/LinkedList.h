#include <stdlib.h>

typedef struct node {
    int value;
    struct node* next;
 } node_t;

void printList(node_t* head);

node_t* createNewNode(int value);