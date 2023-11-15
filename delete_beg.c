#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node* prev_link;
	int data;
	struct node* next_link;
};
struct node* deletion_beg(struct node *head);
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

        head = deletion_beg(head);
	traverse_dll(head);
	return 0;
}
void traverse_dll(struct node* head) {
	struct node* temp = head;
	if(head == NULL)
		printf("double linked list is empty\n");
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp = temp->next_link;
	}
	printf("NULL\n");
}
struct node* deletion_beg(struct node* head)
{
	struct node* temp=head;
	if(head==NULL)
	{
		printf("Linked list is empty!");
	}
        head=temp->next_link;
        free(temp);
        temp=NULL;

	return head;
}

