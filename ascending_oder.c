#include<stdio.h>
int main()
{
    long long num;
    int digit;
    printf("Enter the number :");
    scanf("%d",&num);

    if (num<0)
    {
        num=-num;
    }
    printf("Digit in Ascending order : ");
    if (num==0)
    {
        printf("0");
    }else{
        for (int i = 0; i < 9; i++)
        {
            int temp=num;
            while (temp!=0)
            {
                digit=temp%10;
                if (digit==i)
                {
                    printf("%d",i);

                }
                temp=temp/10;
            }
            
        }
        
    }
    return 0;
}