#include <stdio.h>
#include <stdlib.h>

void bubbleDescending(int arr[]){
	for(int i=4;i>=0;i--){
		for (int j=0;j<i;j++){
			if(arr[j]>arr[j+1]){
				int t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
}

void bubbleAscending(int arr[]){
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(arr[j]<arr[i]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
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
