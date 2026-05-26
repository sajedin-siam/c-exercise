#include<stdio.h>
int main()
{
    printf("Enter the number :");
    int n;
    scanf("%d",&n);
    int sum=0,Answer;

    for (int  i = 0; i <= n; i++)
    {
        Answer=sum+=i;
    }
    printf("Number of sum %d is =%d",n,Answer);
    return 0;
}