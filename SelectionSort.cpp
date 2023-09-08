#include <stdio.h>
#include <stdlib.h>

void bubbleAscending(int arr[]){
	for(int i=0;i<5;i++){
		int min=arr[i];
		int minIndex=i;
		for(int j=i;j<5;j++){
			if(arr[j]<min){
				min=arr[j];
				minIndex=j;
			}
			int temp=arr[minIndex];
				arr[minIndex]=arr[i];
				arr[i]=temp;
		}
	}
}

int main(){
	int arr[]={5,4,3,2,1};
	bubbleAscending(arr);
	for(int i=0;i<5;i++){
		printf("%d\n",arr[i]);
	}
}