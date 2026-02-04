#include<stdio.h>
int main()
{
    int i, p, n, a[100];
    printf("Enter the number of array  element :");
    scanf("%d", &n);


    printf("Entr Array Element :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array Element :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("Enter Delete position :");
    scanf("%d", &p);
  if (p < 0 || p >= n)

    {
        printf("Invalid position! Please enter a value between 0 and %d.\n", n);
        return 1; 
    }
    
  ;

    for ( i =p; i<n-1; i++)
    {
        a[i]=a[i+1];
    }
   
    n--;

    printf("Afterdelete Element:");

    for ( i =0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}
