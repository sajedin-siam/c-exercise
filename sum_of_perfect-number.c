#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("perfect number between 1 to %d :",num);
    for (int  i = 1; i <=num ; i++)
    {
        int sum=0;
        for (int  j = 1; j < i; j++)
        {
            if (i%j==0)
            {
                sum=sum+j;
            }
            
        }
        if (sum==i)
        {
           printf("%d",i);
        }
        
    }
    printf("\n\n");
    return 0;

}