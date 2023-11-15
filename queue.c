#include<stdio.h>
#define MAXSIZE 5
int rear=-1;
int front=-1;
int queue[MAXSIZE];
int isEmpty()
{
	return rear==-1;
}
int isFull()
{
	return rear==MAXSIZE-1;
}
int frontvalue()
{
	if(isEmpty())
	{
		printf("queue is empty\n");
		return 0;
	}
	else
	{
		return queue[front];
	}
}
int enqueue(int data)
{
	if(isFull())
	{
		printf("queue is full\n");
		return 0;
	}
	else
	{
	       return queue[rear++]=data;	
		
	}
}
int dequeue()
{
	if(isEmpty())
	{
		printf("queue is empty\n");
		return 0;
	}
	else
	{
		if(front==rear)
		{
			front=-1;
		}
		else
		{
			front++;
		}
		return queue[rear-1];
	}
}
void display()
{
	int i;
	if(isEmpty())
	{
		printf("queue is empty\n");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",queue[i]);
		}

	}
}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	printf("queue operation before insertion\n");
	display();
	printf("top element=%d\n",frontvalue());
	dequeue();
	printf("queue operation after deletion\n");
	display();
}


