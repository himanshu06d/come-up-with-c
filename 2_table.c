#include<stdio.h>
int main()
{
	int a,i;
	printf("Enter the number you want table of :- ");
	scanf("%d",&a);
	for (i=1;i<=10;i++)
	{
		a*=i;
		printf("%d\n",a*i);
	}
	return 0;
}
