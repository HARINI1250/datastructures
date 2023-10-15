#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};
void delete_random(struct node *head,int position);
void traverse_sll(struct node *head);
int main()
{
	struct node *head=(struct node*)malloc(sizeof(struct node));
	head->data=10;
	head->link=NULL;

	struct node *current=(struct node*)malloc(sizeof(struct node));
	current->data=20;
	current->link=NULL;
	head->link=current;

	current=(struct node*)malloc(sizeof(struct node));
	current->data=30;
	current->link=NULL;
	head->link->link=current;

	delete_random(head,3);
	traverse_sll(head);
}
void traverse_sll(struct node *head)
{
	struct node *temp=NULL;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->link;
	}
}
void delete_random(struct node *head,int position)
{
	struct node *temp=NULL;
	temp=head;
	struct node *new=NULL;
	new=head;
	if(head==NULL)
	{
		printf("LINKed list is empty!");
	}
        while(position!=2)
	{

		temp=temp->link;
		position--;
	}
	new=temp->link;
	free(temp);
	temp=new;
}

