#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

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
	
	//printing linked list
	printf("Printing Linked List \n");
	
	struct Node* temp=head;
	for (int i=0;i<4;i++){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	printf("\n");
	
	//inserting an element in between
	
	struct Node* n5=NULL;
	n5=(struct Node*)malloc(sizeof(struct Node));
	n5->data=0;
	
	n2->next=n5;
	n5->next=n3;
	
	//printing linked list
	
	printf("Printing Linked List after addition \n");
	temp=head;
	for (int i=0;i<5;i++){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	printf("\n");
	
	// delete from last position
	n3->next=NULL;
	
	//printing linked list
	printf("Printing Linked List after deletion \n");
	temp=head;
	for (int i=0;i<4;i++){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	printf("\n");
	
	// deleting from a position
	//deleting node n2
	
	n1->next=n5;
	
	printf("Printing Linked List after deletion \n");
	temp=head;
	for (int i=0;i<3;i++){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	printf("\n");
	
	
	
}