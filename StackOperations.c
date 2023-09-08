// stack operations

#include <stdio.h>
#include <stdlib.h>

//defining global vaiables
int top=-1;
int arr[4];

/*
bool isEmpty(){
	if(top!=-1){
		return false;
	}
	return true;
}

bool isFull(){
	if(top==3){
		return true;
	}
	return false;
}
*/

void push(){
	if (top==3){
		printf("The stack is full\n");
	}
	else{
	int num;
	printf("Enter is the element to be pushed \n");
	scanf("%d",&num);
	top=top+1;
	arr[top]=num;	
	}
}

void topElement(){
	if(top==-1){
		printf("Stack is Empty");
	}
	else{
		printf("The top element is\n");
		printf("%d",arr[0]);	
	}
}


void display(){
	int count =0;
	printf("%d","The stack elements are\n");
	while(count<=top){
		printf("%d\n",arr[count]);
		count ++;
	}
}

int main(){
	push();
	push();
	push();
	push();
	push();
	printf("\n");
	display();
	
	printf("\n");
	topElement();
}
