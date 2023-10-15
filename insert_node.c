#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node*link;
};
struct node* insertion_end(struct node*head,int data);
void traverse_sll(struct node*head);
int main()
{
	struct node *head =(struct node*)malloc(sizeof(struct node));
	head->data = 10;
	head->link = NULL;

	struct node *current =(struct node*)malloc(sizeof(struct node));
	current->data = 20;
	current->link = NULL;
        head->link = current;
	printf("%d",current->data);

        insertion_end(head,30);
	traverse_sll(head);
}
void traverse_sll(struct node*head)
{
	int count=0;
	struct node*temp = head;
	temp==head;
        while(temp->link != NULL)
	{
	   count=count+1;
           printf("%5d\n",temp->data);
 	   temp=temp->link;
	}
}

struct node* insertion_end(struct node*head,int data)
{
	  struct node*new =(struct node*)malloc(sizeof(struct node));
	  new->data = 30;
	  new->link = NULL;
          struct node*temp = head;
	  temp=head;
	  while(temp->link!=NULL)
	  {
              temp=temp->link;
	  }
	  if(temp->link==NULL)
	  {
		  temp->link=new;
	  }
 
}

