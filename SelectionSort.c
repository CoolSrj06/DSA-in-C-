#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[]){
	for(int i=0;i<5;i++){
		int min=arr[i];
		int minIndex=i;
		for(int j=i+1;j<5;j++){
			if(arr[j]<min){
				min=arr[j];
				minIndex=j;
			}
		}
		int temp=arr[minIndex];
				arr[minIndex]=arr[i];
				arr[i]=temp;
	}
}

int main(){
	int arr[]={10,18,2,12,8};
	selectionSort(arr);
	for(int i=0;i<5;i++){
		printf("%d\n",arr[i]);
	}
}