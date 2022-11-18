// Linked list implementation in C

#include <stdio.h>
#include <stdlib.h>

// Creating a node
struct node {
  int value;
  struct node *next;
};

// print the linked list value
void printLinkedlist(struct node *p) {
  while (p != NULL) {
    printf("%d ", p->value);
    p = p->next;
  }
}

int main() {
  // Initialize nodes
  struct node *head;
  struct node *one = NULL;
  struct node *two = NULL;
  struct node *three = NULL;

  // Allocate memory
  one = malloc(sizeof(struct node));
  two = malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));

  // Assign value
  one->value = 1;
  two->value = 2;
  three->value = 3;

  // Connect nodes
  one->next = two;
  two->next = three;
  three->next = NULL;

  // printing node-value
  head = one;
  printf("Linked list contents after entering 3 nodes\n");
  printLinkedlist(head);
  printf("\n");
  
  //Entering new data at specific position
  struct node *newNode;
  newNode = malloc(sizeof(struct node));
  newNode->value = 4;
  
  int position = 0;
  printf("\nEnter position to be added: ");
  scanf("%d", &position);
  struct node *temp = head;
        
  for(int i=2; i < position; i++) {
    if(temp->next != NULL) {
        temp = temp->next;
    }
  }
  newNode->next = temp->next;
  temp->next = newNode;
  
  printf("\nLinked list contents after entering new node at specific position\n");
  printLinkedlist(head);
  printf("\n");
}