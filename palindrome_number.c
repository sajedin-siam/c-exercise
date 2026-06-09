#include<stdio.h>
int main()
{
    long long num,temp;
    long long reverse=0;
    int remainder;
    printf("Enter the number :");
    scanf("%lld",&num);

    if (num<0)
    {
        printf("Negative number are not plaindrom .\n");
        return 0;
    }
     temp=num;
    while (num!=0)
    {
      remainder=num%10;
      reverse=(reverse*10)+remainder;
      num=num/10;
    }
    if (temp==reverse)
    {
        printf("%lld is a palindrom number.\n",temp);

    }else{
        printf("%lld is not a palindrom number\n",temp);
    }
    return 0;
}