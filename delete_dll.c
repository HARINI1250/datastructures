#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node* prev_link;
	int data;
	struct node* next_link;
};
void deleteAtEnd(struct node* head);
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

	deleteAtEnd(head);
	traverse(head);
}
void traverse(struct node* head) {
	struct node* temp = head;
	if(head == NULL)
		printf("double linked list is empty\n");
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp = temp->next_link;
	}
	printf("NULL\n");
}
void deleteAtEnd(struct node* head) {
	struct node*temp=NULL;
	temp=head;
	struct node*temp2=NULL;
	temp2=head;
	while(temp->next_link!=NULL)
	{
		temp2=temp;
		temp=temp->next_link;
	}
	temp2->next_link=NULL;
        free(temp);
	temp->prev_link=NULL;
}
 

