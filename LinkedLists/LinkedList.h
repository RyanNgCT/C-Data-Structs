#include <stdlib.h>

typedef struct node {
    int value;
    struct node* next;
 } node_t;

void printNode(node_t* head);

node_t* createNewNode(int value);