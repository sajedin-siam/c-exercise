#include <stdio.h>
void findmaxmin(int arr[], int size, int index, int *max, int *min)
{
    if (index == size - 1)
    {
        *max = arr[index];
        *min = arr[index];
        return;
    }
    findmaxmin(arr, size, index + 1, max, min);
    if (arr[index]> *max)
    {
        *max = arr[index];
    }
    if (arr[index] < *min)
    {
        *min = arr[index];
    }
}
int main()
{
    int size, max, min;

    printf("Array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Element: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    findmaxmin(arr, size, 0, &max, &min);
    printf("Maximum element =%d\n", max);
    printf("Minimun element =%d\n", min);
    return 0;
}