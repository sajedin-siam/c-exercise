#include <stdio.h>
int main()
{
    int start ,end;
    int primecount =0;
    printf("Enter the start number : ");
    scanf("%d", &start);
    printf("Enter the end number : ");
    scanf("%d", &end);
    if (start>end)
    {
        int temp=start;
        start=end;
        end=temp;
    }
    
    for (int  i = start; i <= end ; i++)
    {
        if (i<=1)
        {
            continue;
        }
        int isprime=1;
        for (int  j = 2; j*j <= i; j++)
        {
            if (i%j==0)
            {
               isprime=0;
               break;
            }
            
        }
        if (isprime==1)
        {
            primecount++;
        }
        
    }
    printf("total prime number %d and %d is :%d \n",start,end,primecount);
    return 0;
}