// /WAP to find largest and smallest element stored in an array.
#include <stdio.h>

int main()
{
    int arr[8], min, max, i;
    printf("Enter the elements in the array:\n\n");
    for (i = 0; i < 8; i++)
    {
        printf("Enter the element at index %d: ", i);
        scanf("%d", &arr[i]);
        min = max = arr[0];
        if (min > arr[i])
            min = arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    printf("The minimum element of the array is: %d\n\nThe maximum element of the array is: %d", min, max);
    return 0;
}