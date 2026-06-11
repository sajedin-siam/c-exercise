#include <stdio.h>
int findalloccurrence(int arr[], int size, int key, int index)
{
    if (index == size)
    {
        return 0;
    }
    int count = 0;
    if (arr[index] == key)
    {
        printf("Found at index: %d\n", index);
        count = 1;
    }
    return count + findalloccurrence(arr, size, key, index + 1);
}
int main()
{
    int size, key;

    printf(" array size :");
    scanf("%d", &size);
    int arr[size];
    printf(" element:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter key  :");
    scanf("%d", &key);

    int Totaloccurrences = findalloccurrence(arr, size, key, 0);
    if (Totaloccurrences > 0)
    {
        printf("Total occurrences : %d ", Totaloccurrences);
    }
    else
    {
        printf("Enlement not fond ");
    }

    return 0;
}