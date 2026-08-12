#include<stdio.h>
int main()
{
    int a,b,c,min;
    printf("A=");
    scanf("%d",&a);
    printf("B=");
    scanf("%d",&b);
    printf("C=");
    scanf("%d",&c);
    if (a<=b && a<=c){
        printf("minimum number is A=%d\n",a);
    }
    else if(b<=a && b<=c){
     printf("minimum number is B=%d\n",b);
    }
    else{
        printf("minimum number is C=%d\n",c);
    }
    return 0;
}
