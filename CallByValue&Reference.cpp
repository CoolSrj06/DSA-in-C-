#include<iostream>
using namespace std;
void check(int& a,int& b){//pass by reference function
	a+=100;
	b-=100;
}
/**void check(int a,int b){//pass by value function
	a+=100;
	b-=100;
}**/
int main(){
	int a=56;
	int b=85;
	check(a,b);//Pass by reference
	cout<<a<<endl;
	cout<<b<<endl;	
	return 0;
}




