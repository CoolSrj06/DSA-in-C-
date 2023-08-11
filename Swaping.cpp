#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers");
	scanf("%d",&a);
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a = %d",a);
	printf("b = %d",b);
	return 0;
}
