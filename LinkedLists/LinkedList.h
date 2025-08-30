#include <stdlib.h>

typedef struct node {
    int value;
    struct node* next;
 } node_t;

void printList(node_t* head);
node_t* createNewNode(int value);

node_t* insertAtHead(node_t** head, node_t* toInsert);
node_t* insertAtTail(node_t** head, node_t* toInsert);
void insertAfterNode(node_t* target, node_t* toInsert);

void deleteNode(node_t** head, node_t* toDelete);

node_t* findNode(node_t* head, int val);