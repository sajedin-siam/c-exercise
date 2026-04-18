#include<stdio.h>
int main()
{
    int a[100],b[100],c[100],m1,m2;

    printf("Enter first array size :");
    scanf("%d",&m1);
    printf("Enter first array :");
    for (int i = 0; i < m1; i++)
    {
         scanf("%d",&b[i]);
    }
    

    printf("Enter second array size :");
    scanf("%d",&m2);
    printf("Enter second array :");
    for (int  i = 0; i < m2; i++)
    {
        scanf("%d",&c[i]);
    }
    //copy first array
    for (int  i = 0; i <m1; i++)
    {
        a[i]=b[i];
    }
    //copy second array 
    for (int  i = 0; i < m2; i++)
    {
        a[m1+i]=c[i];
    }
    int n=m1+m2;

    //display first array 
    printf("First array :\n");
    for (int  i = 0; i < m1; i++)
    {
        printf("%d ",b[i]);
    }
      //display Second array 
    printf("Second array :\n");
    for (int  i = 0; i < m2; i++)
    {
        printf("%d ",c[i]);
    }
       //display Marge array 
    printf("Marge array :\n");
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}