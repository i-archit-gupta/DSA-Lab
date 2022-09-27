// WAP to sort an array of n numbers in Descending Order.
#include <stdio.h>

int main()
{
    int n, i, j, z;
    printf("Enter the no. of elements you want in an array: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                z = arr[i];
                arr[i] = arr[j];
                arr[j] = z;
            }
        }
    }
    printf("The elements in descending order is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}