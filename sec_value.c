#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    double pi;
    pi=3.1416;
    printf("Enter t:");
    scanf("%d",&t);
    printf("sec(%d)=%.3lf",t,1/cos(t*(pi/180.0)));
    return 0;
}