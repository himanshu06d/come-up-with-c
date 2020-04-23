#include<stdio.h>
int main()
{
        float p,r,t,SI;
        printf("Enter principle amount = \n");
        scanf("%f",&p);
        printf("Enter rate of interest = \n");
        scanf("%f",&r);
        printf("Enter time duration = \n");
        scanf("%f",&t);
        SI=p*r*t/100;
        printf("Simple interest of given details is %f",SI);
        return 0;
}

