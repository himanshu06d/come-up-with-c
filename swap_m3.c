#include<stdio.h>
int main()
{
	int a=4,b=5; 
		printf("Before swapping a=%d and b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
printf("After swapping a=%d and b=%d\n",a,b);
return 0;
}

