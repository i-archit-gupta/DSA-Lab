// WAP to print the elements of array in reverse order.
#include <stdio.h>
int main()
{
    int n, i, t;
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
    for (int i = 0; i < n / 2; i++)
    {
        t = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = t;
    }
    printf("\nThe reversed array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}