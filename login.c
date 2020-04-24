

#include<stdio.h>
#include<string.h>
int main()
{
        char ID[200]="hd156681@gmail.com",PWD[200]="12345";
        char id[200],pwd[200];
        printf("Enter ID = \n");
        scanf("%s",&id);
        printf("Enter the password =\n");
        scanf("%s",&pwd);
        if (strcmp(ID,id)==0 && strcmp(PWD,pwd)==0)
        {
                printf("Login successful");
        }
        else printf("check your ID and Password");
        return 0;
}

