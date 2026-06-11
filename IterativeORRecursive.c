#include <stdio.h>
int iterativelinearsearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int recursivelinearsearch(int arr[], int size, int index, int target)
{
    if (index == size)
    {
        return -1;
    }
    if (arr[index] == target)
    {
        return index;
    }
    return recursivelinearsearch(arr, size, index + 1, target);

}

int main()
{
    int size, target;
    printf("Array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Element : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter target element : ");
    scanf("%d", &target);
    int iteratuve = iterativelinearsearch(arr, size, target);
   
    if (iteratuve != -1)
    {
        printf("iteratrive Found at index: %d\n", iteratuve);
    }else
    {
        printf("Not found");
    }
     int recursive = recursivelinearsearch(arr, size, 0, target);
    if (recursive != -1)
    {
        printf("recursive Found at index: %d \n", recursive);
    }else{
        printf("Not found");
    }

    return 0;
}