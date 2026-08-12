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

    for (int i = 0; i < n; i++)
    {
        if (arr[i]==target)
        {
          printf("Trageted array index :%d ",i);
        }
        
    }
    printf("\n");
    return 0;
}