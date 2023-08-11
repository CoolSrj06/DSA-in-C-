#include <iostream>
using namespace std;
int main() {
	int c,b,a;
	cout<<"Enter three numbers"<<endl;
	cin>>a;
	cin>>c;
	cin>>b;
	cout<<c+b<<endl;
	cout<<"If "<<c<<" greater than "<<b<<endl;
	bool d=c>b;
	cout<<d<<endl;

	;
	if(a!=c+b) {
		cout<<"Not equal"<<endl;
	} else {
		cout<<"Equal"<<endl;
	}
	cout<<&a<<endl;//Prints the address of the variable in the system
	cout<<sizeof(c)<<endl;//Represent size of variable in the memory
	return 0;

}