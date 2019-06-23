#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
};

void push(struct Node** head_ref, int new_data){
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

	new_node->data = new_data;
	new_node->next = (*head_ref);
	new_node->prev = NULL;

	if ((*head_ref) != NULL)
		(*head_ref)->prev = new_node;

	(*head_ref) = new_node;
}

void insertAfter(struct Node* prev_node, int new_data){
	if (prev_node == NULL) {
		printf("Previous node cannot be NULL");
		return;
	}

	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	
	new_node->data = new_data;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
	new_node->prev = prev_node;

	if(new_node->next != NULL)
		new_node->next->prev = new_node;
}

void append(struct Node** head_ref, int new_data){
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	struct Node* last = *head_ref;

	new_node->data = new_data;
	new_node->next = NULL;

	if(*head_ref == NULL){
		new_node->prev = NULL;
		*head_ref = new_node;
		return;
	}
	
	while(last->next != NULL){
		last = last->next;
	}

	last->next = new_node;

	new_node->prev = last;

	return;
}

void printList(struct Node* node){
	struct Node* last;
	printf("\nTraversal forward.\n");
	while (node != NULL) {
		printf("%d\n", node->data);
		last = node;
		node = node->next;
	}
}

int main(){
	struct Node* head = NULL;

	append(&head, 7);
	append(&head, 8);
	append(&head, 10);
	append(&head, 1);

	printList(head);

	return 0;
}
