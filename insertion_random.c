#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*link;
};
void insert_at_position(struct node*head,int position);
void traverse_sll(struct node*head);
int main()
{
	struct node*head = (struct node*)malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;

	struct node*current = (struct node*)malloc(sizeof(struct node));
	current->data = 46;
	current->link = NULL;
	head->link = current;

	current = (struct node*)malloc(sizeof(struct node));
	current->data=47;
	current->link=NULL;
	head->link->link = current;

	insert_at_position(head,3);
	traverse_sll(head);
       // struct node*ptr=head;
	//while(ptr!=NULL)
	//{
	//	printf("%d \n",ptr->data);
	//	ptr=ptr->link;
	//}

}
void traverse_sll(struct node*head)
{
	struct node *temp=NULL;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->link;
	
	}
}
void insert_at_position(struct node*head,int position)
{
	struct node*temp=head;
	struct node*new=(struct node*)malloc(sizeof(struct node));
	new->data=49;
	new->link=NULL;
	
	while(position!=2)
	{
		temp=temp->link;
		position--;
	}
	new->link=temp->link;
	temp->link=new;
}

		

