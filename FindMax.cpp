#include <iostream>
using namespace std;
int findMax(int arr[]){
	int max=arr[0];
	for(int i=0;i<5;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}
int main(){
	int arr[5]={1,2,5,7,8};
	cout<<findMax(arr);
}