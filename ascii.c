#include<stdio.h>
int main()
{
        char ch;
        printf("Enter the alphabet =\n");
        scanf("%c",&ch);
 
     if (ch>=65 && ch<=90 || ch>=97 && ch<=122)
        {
                printf("It is a alphabet\n");
        
        }
         
            else if (ch>=48 && ch<=57)
                
            {
                printf("It is a number\n");
            }
       
        else
        
            printf("It is a special character/symbol\n");
                    
        

        return 0;
}

