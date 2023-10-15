#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node*link;
};
int main(){

	struct node *head =(struct node*)malloc(sizeof(struct node));
	head->data = 10;
	head->link = NULL;
     
	struct node *current =(struct node*)malloc(sizeof(struct node));
	current->data = 20;
	current->link = NULL;
         
	head->link = current;

	current =(struct node*)malloc(sizeof(struct node));
	current->data = 30;
	current->link = NULL;
        
	head->link->link = current;
	count_node(head);
}
void count_node(struct node*head){
	int count=0;
	struct node*temp = head;
	temp==head;
	if(temp == NULL){
	    printf("Linked list is empty:");
	}
	while(temp->link!=NULL)
	{
		printf("%5d",temp->data);
		count++;
		temp=temp->link;

	}
	printf("%d",count);

}
