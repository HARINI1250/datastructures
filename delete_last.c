#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
        struct node*link;
};
void deletion_last(struct node*head);
void traverse_sll(struct node*head);
int main()
{
	struct node*head=(struct node*)malloc(sizeof(struct node));
	head->data=10;
	head->link=NULL;

	struct node*current=(struct node*)malloc(sizeof(struct node));
	current->data=20;
	current->link=NULL;
	head->link = current;

	current=(struct node*)malloc(sizeof(struct node));
	current->data = 30;
	current->link=NULL;
	head->link->link = current;
          
        deletion_last(head);
	traverse_sll(head);
}
void traverse_sll(struct node*head)
{
	struct node *temp = NULL;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->link;
	}
}
void deletion_last(struct node*head)
{

	struct node*temp=NULL;
	temp=head;
	while(temp->link!=NULL)
	{
		temp2=temp;
		temp=temp->link;
	}
	temp2->link=NULL;
        free(temp);
	temp->link=NULL;
}
      
