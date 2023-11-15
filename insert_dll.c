#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node* prev_link;
	int data;
	struct node* next_link;
};
void insertAtEnd(struct node* head,int data);
void traverse(struct node* head);
int main()
{
	struct node* head = (struct node*)malloc(sizeof(struct node));
	head->prev_link = NULL;
	head->data = 10;
	head->next_link = NULL;

	struct node* current = (struct node*)malloc(sizeof(struct node));
	current->prev_link = NULL;
	current->data = 20;
	current->next_link = NULL;

	head->next_link = current;
	current->prev_link = head;
            
	insertAtEnd(head,40);
	traverse(head);
}
void traverse(struct node* head) {
	struct node* temp = head;
	if(head == NULL)
		printf("double linked list is empty\n");
	while(temp!=NULL)
	{
		printf("%5d",temp->data);
		temp = temp->next_link;
	}
	printf("NULL\n");
}
void insertAtEnd(struct node* head,int data) {
	struct node* new = (struct node*)malloc(sizeof(struct node));
	new->prev_link = NULL;
	new->data = 40;
	new->next_link = NULL;
	struct node* temp = head;
	while(temp->next_link!=NULL)
	{
		temp=temp->next_link;
	}
	if(temp->next_link==NULL)
	{
		temp->next_link = new;
	}
}

			



