#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the alphabet \n");
	scanf("%c",&ch);
	if (ch>=65 && ch<=90)
	{
		printf("Uppercase alphabet\n");
	}
	else 
	{
printf("Lowercase alphabet\n");
	}
	return 0;
}
