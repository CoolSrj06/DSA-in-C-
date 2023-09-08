//linked list implementation
#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

int main(){
	//declaring and initializing the node
	
	struct Node *head;
	struct Node *n1=NULL;
	struct Node *n2=NULL;
	struct Node *n3=NULL;
	struct Node *n4=NULL;
	
	
	//printf("%zu",sizeof(n1));
	
	head=n1;
	
	n1=(struct Node*)malloc(sizeof(struct Node));
	n2=(struct Node*)malloc(sizeof(struct Node));
	n3=(struct Node*)malloc(sizeof(struct Node));
	n4=(struct Node*)malloc(sizeof(struct Node));
	
	//assigining value to data
	n1->data=8;
	n2->data=6;
	n3->data=4;
	n4->data=2;
	
	//connecting nodes
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=NULL;
	
	
	
	printf("%d\n",n1->data);
	printf("%d",n2->data);
	
	return 0;
}