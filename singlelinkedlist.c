#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int data;
	struct node*link;
};
int main(){

	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->data = 10;
	head->link = NULL;
	printf("%5d \t",head->data);
	
	struct node *current = (struct node*)malloc(sizeof(struct node));
	current->data = 20;
	current->link = NULL;
	printf("%5d \t",current->data);

	head->link = current;
	printf("%5d \t",head->link);

	current = (struct node*)malloc(sizeof(struct node));
	current->data = 30;
	current->link = NULL;

	head->link->link = current;
	printf("%5d\t",head->link->link);

	return 0;
}
