#include<stdio.h>
int main()
{
	float p,r,t,SI;
	printf("Enter principle amount = "/n);
	scanf("%d",&p);
	printf("Enter rate of interest = "/n);
	scanf("%d",&r);
	printf("Enter time duration = "/n);
	scanf("%d",&t);
	SI=p*r*t/100;
	printf("Simple interest of given details is %d",SI);
	return 0;
}
