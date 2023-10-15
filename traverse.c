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
	traverse_sll(head);
}
void traverse_sll(struct node*head){
	int count=0;
	struct node*temp = head;
	temp==head;
        while(temp->link != NULL)
	{
	   count=count+1;
           printf("%5d",temp->data);
 	   temp=temp->link;
	}
	printf("%d",count);
   }   
	  
