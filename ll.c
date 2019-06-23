#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

void append(struct Node** head, int new_data){
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	struct Node* last = *head;

	new_node->data = new_data;
	new_node->next = NULL;

	if(*head == NULL){
		*head = new_node;
		return;	
	}

	while(last->next != NULL){
		last = last->next;
	}

	last->next = new_node;
}

void printList(struct Node* head){
	printf("LinkedList Items\n");

	while(head != NULL){
		printf("%d\n", head->data);
		head = head->next;
	}
}

int main(){
	struct Node* head = NULL;
	append(&head, 10);
	append(&head, 20);
	printList(head);
	return 0;
}
