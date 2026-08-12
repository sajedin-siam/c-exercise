#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array element : ");
    for (int  i = 0; i <  n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int target;
    printf("Enter target element: ");
    scanf("%d",&target);
int found=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==target)
        {
          printf("Trageted element array index :%d \n",i);
          found=1;
        }
        
    }
    if (found==0)
    {
       printf("Element not found");
    }
    
    printf("\n");
    return 0;
}