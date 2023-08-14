#include <iostream>
using namespace std;
int main(){
	
	//int ques[2][3]={{1,2,4},{3,3,4}}
	
	//cout<<ques[1][0];
	int arr[3][3];
	
	cout<<"Input the arr"<<endl;
	
	//taking input
	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	
	//printing output
	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int max=0;int min=arr[0][0];
	int maxi=0;int maxj=0;
	int mini=0;int minj=0;
	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
				maxi=i;
				maxj=j;
			}
			if(arr[i][j]<min){
				min=arr[i][j];
				mini=i;
				minj=j;
			}
		}	
	}
	
	cout<<endl;
	
	
	int t=max;
	arr[maxi][maxj]=min;
	arr[mini][minj]=t;
	
	//printing output
	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

