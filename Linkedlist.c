#include<stdio.h>
#include<stdlib.h> // to call malloc 

struct Node{
	int data;
	struct Node* next;//in C convention we need to write 'struct'
};

int main(){
	
	//struct Node n1;
	//printf("%d",sizeof(n1));//if we want to print integer we need to write %d - %d: also known as format specifire. Different for different data types
	//printf("%x",malloc(sizeof(n1)));
	
	struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));// malloc is returning something that is type void, so we are casting to type structure or node pointer.
	struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));
	struct Node* n3 = (struct Node*)malloc(sizeof(struct Node));
	
	n1->data = 8;
	 
return 0;
}