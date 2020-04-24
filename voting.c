#include<stdio.h>
int main()
{
	int a;

	printf("Enter your age= \n");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("You are eligible\n");
	}
		else 
		{
			printf("Not allowed\n");
	}
	return 0;
}
