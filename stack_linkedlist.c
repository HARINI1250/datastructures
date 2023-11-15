#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *top = NULL;
int isEmpty()
{
	return top == NULL;
}
int push(int data)
{
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->data = data;
	new->link = NULL;
	new->link = top;
	top=new;
	return top;
}
int pop()
{
	if(isEmpty())
	{
		printf("stack is empty\n");
	        return 0;
	}
	else
	{
		struct node *temp = top;
	        top = temp->link;
	        free(temp);
	        temp==NULL;
                return top;
	}
}
int peek()
{
	if(isEmpty())
	{
		printf("stack is empty\n");
	        return 0;
	}
	else
	{
		return top->data;
	}
}
void display()
{
	struct node *temp = top;
	if(isEmpty())
	{
		printf("stack is empty\n");
	        return 0;
	}
	else
	{
	      while(temp!=NULL)
 	      {
	            	printf("%d->",temp->data);
		        temp=temp->link;
	      }
	}
}
void main()
{
	push(10);
	push(20);
	push(30);
	push(40);
        printf("initial satck values\n");
	display();
	printf("top value=%d",peek());
	pop();
	pop();
	printf("after pop operation elements \n");
	display();
	if(isEmpty())
	{
		printf("stack is empty");
	}

	else
		printf("Stack is not empty");
}
