#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node* prev_link;
	int data;
	struct node* next_link;
};
void search_dll(struct node* head,int data);
void traverse_sll(struct node* head);
int main()
{
	struct node* head = (struct node*)malloc(sizeof(struct node));
	head->prev_link = NULL;
	head->data = 10;
	head->next_link = NULL;

	struct node* current = (struct node*)malloc(sizeof(struct node));
	current->prev_link = NULL;
	current->data = 20;
	current->next_link = NULL;

	head->next_link = current;
	current->prev_link = head;

	current = (struct node*)malloc(sizeof(struct node));
	current->prev_link = NULL;
	current->data = 30;
	current->next_link = NULL;

	head->next_link->next_link=current;
	current->prev_link=head->next_link;

        search_dll(head,60);
	traverse_dll(head);
	return 0;
}
void traverse_dll(struct node* head) {
	struct node* temp = head;
	printf("NULL\n");
	if(head == NULL)
		printf("double linked list is empty\n");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp = temp->next_link;
	}
	printf("NULL\n");
}
void search_dll(struct node* head,int data)
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
		temp=temp->next_link;
	   }
	}
	printf("element is not found\n");
}
