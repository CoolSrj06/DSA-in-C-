#include <iostream>
using namespace std;
void search(int arr[],int m){
	for(int i=0;i<7;i++){
		if(arr[i]==m){
			cout<<"Element found";
		 return;
		}
	}   
		cout<<"Element not found";                       
		return;
}
int main(){
	cout<<"Enter number to be seached"<<endl;
	int m;
	cin>>m;
	int arr[]={1,5,3,4,8,9,7};
	
	search(arr,m);
}