//Write a function to find the maximum and minimum among the numbers passed the the function
#include<iostream>
using namespace std;
int max(int a,int b);
int min(int a,int b);
int max(int a,int b,int c);
int min(int a,int b,int c);
int main(){
	int a=45;
	int b=25;
	int c=36;
	cout<<max(a,b)<<endl;
	cout<<min(a,b,c)<<endl;
	
}
int max(int a,int b){
	return a>b?a:b;
}
int min(int a,int b){
	return a>b?a:b;
}
int max(int a,int b,int c){
	if(a>b&&a>c){
		return a;
	}
	else if(b>a&&b>c){
		return b;
	}
	else{
		return c;
	}
}

int min(int a,int b,int c){
	if(a<b&&a<c){
		return a;
	}
	else if(b<a&&b<c){
		return b;
	}
	else{
		return c;
	}
}