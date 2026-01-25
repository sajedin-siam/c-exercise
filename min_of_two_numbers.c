//write a program that read two numbers and display minimum(use integer number)

#include<stdio.h>
int main()
{
    int a,b,min;
    printf("A=");
    scanf("%d",&a);
    printf("B=");
    scanf("%d",&b);
    if (a<b){
        printf("minimum number is=%d\n",a);
    }
    else{
     printf("minimum number is=%d\n",b);
    }
    return 0;
}
