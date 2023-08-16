//using pointers
#include <iostream>
using namespace std;
int main(){
	int a=5;
	int *ptr;// declare pointer
	ptr = &a;// assign adress to pointer
	cout<<ptr<<endl;//showing the pointer value
	cout<<&ptr<<endl;//address of pointer itself
	cout<<(*ptr)<<endl;
	//& address of operator
	//*ptr value at the address
	cout<<sizeof(ptr);

	return 0;
}