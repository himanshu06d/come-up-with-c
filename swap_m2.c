#include<stdio.h>
int main()
{
	int a=4,b=5,c;
	printf("Before swapping a=%d and b=%d/n",a,b);
	c=a+b;
	a=c-a;
	b=c-b;
	printf("After swapping a=%d and b=%d/n",a,b);
	return 0;
}
