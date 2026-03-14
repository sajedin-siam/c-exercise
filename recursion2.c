//Sum of first n natural number
#include<stdio.h>
//recursion function
int sum(int n){
    if (n==1)
    {
        return 1;
    }
    
    int sumNM=sum(n-1);
    int result=sumNM+n;
    return result;
}
int main()
{
    printf("ENter A number :");
    int n;
    scanf("%d",&n);
    printf("Answer is :%d",sum(n));

    return 0;
}