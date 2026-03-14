//factorial of C
#include<stdio.h>
int fact(int n){
    if (n==0)
    {
        return 1;
    }
    
    int fact1=fact(n-1);
    int answer=fact1*n;
    return answer;
}

int main()
{
    printf("enter the number :");
    int n;
    scanf("%d",&n);
    printf("Factgorial is :%d",fact(n));
    return 0;
}