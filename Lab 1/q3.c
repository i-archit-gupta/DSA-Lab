// /WAP to find largest and smallest element stored in an array.
#include <stdio.h>

int main()
{
    int n, i, min, max;
    printf("Enter the no. of elements you want in an array: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nThe array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    min = max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    printf("\n\nThe minimum element of the array is: %d\n\nThe maximum element of the array is: %d", min, max);
    return 0;
}