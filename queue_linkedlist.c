#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *rear = NULL;
struct node *front = NULL;
int isEmpty()
{
	return front  == NULL;
}
int enqueue(int data)
{
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->data = data;
	new->link = NULL;
	struct node* temp=rear;
	while(temp->link!=NULL)
	{
              temp=temp->link;
	}
	if(temp->link==NULL)
	{
               temp->link=new;
	}

}
int dequeue()
{
	if(isEmpty())
	{
		printf("stack is empty\n");
	        return 0;
	}
	else
	{
		struct node *temp = front;
	        front = temp->link;
	        free(temp);
	        temp==NULL;
		return front;
               
	}
}
int frontvalue()
{
	if(isEmpty())
	{
		printf("stack is empty\n");
	        return 0;
	}
	else
	{
		return front->data;
	}
}
void display()
{
	struct node *temp = front;
	if(isEmpty())
	{
		printf("stack is empty\n");
	     
	}
	else
	{
	      while(temp!=NULL)
 	      {
	            	printf("%d->",temp->data);
		        temp=temp->link;
	      }
	      printf("NULL\n");
	}
}
void main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
        printf("initial queue values\n");
	display();
	printf("top value=%d",frontvalue());
	dequeue();
	printf("after deletion operation elements \n");
	display();
	if(isEmpty())
	{
		printf("queue is empty");
	}
        else
	{
		printf("queue is not empty");
	}
}
