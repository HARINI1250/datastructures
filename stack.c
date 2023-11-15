#include<stdio.h>
#define MAX_SIZE 5
int stack[MAX_SIZE];
int top=-1;
int isEmpty()
{
	return top==-1;
}
int isFull()
{
	return top == MAX_SIZE-1;
}
int peek()
{
	if(isEmpty())
		printf("stack is empty\n");
	return stack[top];
}
int push( int value)
{
	if(isFull())
		printf("stack is full\n");
	else
	       return stack[++top]=value;
}
int pop()
{
	if(isEmpty())
		printf("stack is empty\n");
	else
		return stack[top--];
	        
}
int displayStack()
{
	int i;
	if(isEmpty())
		printf("stack is empty\n");
	else
	{
		for(int i=top;i>=0;i--)
			printf("%d\n",stack[i]);
	}
}
int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	printf("before pop operation elements\n");
	displayStack();
	peek();
	printf(" top element=%d\n",peek());
	pop();
	pop();
	printf("after pop operation elements\n");
        displayStack();

}
