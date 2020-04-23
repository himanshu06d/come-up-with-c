#include<stdio.h>
int main()
{
	int a=4,b=8,c;
	printf("Before swapping a=%d and b=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("After Swapping a=%d and b=%d",a,b);
	return 0;
}
