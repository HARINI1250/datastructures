#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node* prev_link;
	int data;
	struct node* next_link;
};
void insertAtRandom(struct node* head,int position);
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

	current = (struct node*)malloc(sizeof(struct node));
	current->prev_link = NULL;
	current->data = 30;
	current->next_link = NULL;

        head->next_link->next_link = current;
	current->prev_link = head->next_link;

	insertAtRandom(head,2);
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
void insertAtRandom(struct node*head,int position)
{
	struct node* new=(struct node*)malloc(sizeof(struct node));
	new->prev_link=NULL;
	new->data=49;
	new->next_link=NULL;
	struct node* temp=head;
	while(position!=2)
	{
		temp=temp->next_link;
		position--;
	}
	new->next_link=temp->next_link;
	temp->next_link=new;
	new->prev_link=temp;
}

