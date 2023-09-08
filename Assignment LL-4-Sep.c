/** 
Srijan Maurya
22BCE10258

**/

#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

void display(struct Node* temp,int n){
	//printing linked list
	printf("Printing Linked List \n");
	
	for (int i=0;i<n;i++){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main(){
	
	// initialising node
	struct Node* head;
	struct Node* n1=NULL;
	n1=(struct Node*)malloc(sizeof(struct Node));
	struct Node* n2=NULL;
	n2=(struct Node*)malloc(sizeof(struct Node));
	struct Node* n3=NULL;
	n3=(struct Node*)malloc(sizeof(struct Node));
	struct Node* n4=NULL;
	n4=(struct Node*)malloc(sizeof(struct Node));
	
	
	head=n1;
	
	//adding elements
	n1->data=5;
	n2->data=7;
	n3->data=1;
	n4->data=9;
	
	//connecting node
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=NULL;
	
	
	//inserting an element in between
	
	struct Node* n5=NULL;
	n5=(struct Node*)malloc(sizeof(struct Node));
	n5->data=0;
	
	n2->next=n5;
	n5->next=n3;
	
	display(head,5);
}