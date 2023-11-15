#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node* prev_link;
	int data;
	struct node* next_link;
};
void insertAtBeg(struct node* head,int data);
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
            
	insertAtBeg(head,40);
}
void insertAtBeg(struct node* head,int data) {
	struct node* new = (struct node*)malloc(sizeof(struct node));
	new->prev_link = NULL;
	new->data = 40;
	new->next_link = NULL;
	struct node* temp = head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next_link;
	}
	if(temp!=NULL)
	{
	      new->next_link=head;
	      head->prev_link=new;
	    
	}
}

			
