#include<stdio.h>
int main()
{
    int a,b,c,medium;
    printf("A=");
    scanf("%d",&a);
    printf("B=");
    scanf("%d",&b);
    printf("C=");
    scanf("%d",&c);
    if ((a>b && a<c) || (a<b && a>c)){
        printf("medium number is A=%d\n",a);
    }
    else if ((b>a && b<c) || (b<a && b>c)){
     printf("medium number is B=%d\n",b);
    }
    else{
        printf("medium number is C=%d\n",c);
    }
    return 0;
}
