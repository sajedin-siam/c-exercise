#include <stdio.h>
int binarysearch(int arr[], int n, int search)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == search)
        {
            return mid; // element found mid
        }
        else if (arr[mid] < search)
        {
            low=mid + 1; // element searching right side
        }
        else
        {
            high = mid - 1; // element searching left side
        }
    }
    return -1; // element not found
}
int main()
{
    int n, i, search;
    printf("Enter number of element :");
    scanf("%d", &n);
    int arr[n];

    printf("Aray element:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enetr the element to Search:");
    scanf("%d", &search);

    int result = binarysearch(arr, n, search);

    if (result != -1)
    {
        printf("Element %d found %d position\n", search, result + 1);
    }
    else
    {
        printf(" element %d not found in this array\n", search);
    }
    return 0;
}