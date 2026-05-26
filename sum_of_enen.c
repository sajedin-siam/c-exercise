#include<stdio.h>
int main()
{
int sum=0,n;
printf("Enter the number: ");
scanf("%d",&n);
int answer;
for (int i = 0; i <=n; i++)
{
    if (i%2==0)
    {
         answer= sum+=i;
    }
    
}
printf("Answer is :%d",answer);
return 0;
}