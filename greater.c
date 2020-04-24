#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the first no:- \n");
	scanf("%d",&a);
	printf("Enter the second no:- \n");
	scanf("%d",&b);
	if (a>b)
	{
		printf("%d is greater\n",a);
	}
	if (b>a)
	{
		printf("%d  is greater\n",b);
	}
	else
		printf("Both are equal\n");
	return 0;
}
