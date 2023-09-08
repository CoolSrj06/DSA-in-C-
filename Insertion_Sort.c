#include<stdlib.h>
#include<stdio.h>
void insertionSort(int arr[]){
	for(int i=1;i<5;i++){
		int key=arr[i];
		int j=i-1;
		
		while(arr[j]>key&&j>=0){
			arr[j+1]=arr[j];
			arr[j]=key;
			j-=1;
		}
		//arr[j+1]=key;
	}
}

void display(int arr[]){
	for (int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
}

int main(){
	int arr[]={5,7,2,1,6};
	insertionSort(arr);
	display(arr);
}