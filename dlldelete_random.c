#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node* prev_link;
	int data;
	struct node* next_link;
};
void delete_random(struct node* head,int position);
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
		

        delete_random(head,3);
	traverse_dll(head);
	return 0;
}
void traverse_dll(struct node* head) {
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
void delete_random(struct node *head,int position)
{
	struct node *temp=head;
	struct node *new=head;
	if(head==NULL)
	{
		printf("LINKed list is empty!");
	}
	else if(position==1)
	{
		head=temp->next_link;
		free(temp);
		temp=NULL;
	}
        while(position!=2)
	{
                new=temp;
		temp=temp->next_link;
		position--;
	}
	new->next_link=temp->next_link;
	free(temp);
	temp=new;
}

