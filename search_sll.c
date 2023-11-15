#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
void search_sll(struct node* head,int data);
void traverse_sll(struct node* head);
int main()
{
	struct node* head = (struct node*)malloc(sizeof(struct node));
	head->data = 10;
	head->link = NULL;

	struct node* current = (struct node*)malloc(sizeof(struct node));
	current->data = 20;
	current->link = NULL;

	head->link = current;

	current = (struct node*)malloc(sizeof(struct node));
	current->data = 30;
	current->link = NULL;

	head->link->link=current;

        search_sll(head,60);
	traverse_sll(head);
	return 0;
}
void traverse_sll(struct node* head) {
	struct node* temp = head;
	if(head == NULL)
		printf("single linked list is empty\n");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp = temp->link;
	}
	printf("NULL\n");
}
void search_sll(struct node* head,int data)
{
	struct node* temp=head;
	while(temp!=NULL)
	{
           if(temp->data==data)
	   {
		printf("element is found\n");
		return;
	   }
	   else
	   {
		temp=temp->link;
	   }
	}
	printf("element is not found\n");
}
