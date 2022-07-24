// WAP to insert a new element in a specified position in the array.
#include <stdio.h>
int main()
{
    int n, k, i, num, flag = 0;
    printf("Enter the no. of elements you want in an array: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements of the array are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\nEnter the position where you wish to insert element: ");
    scanf("%d", &k);
    if (k < n)
    {
        printf("Enter the number you want to insert: ");
        scanf("%d", &num);
        n++;
        flag = 1;
    }
    else
    {
        printf("Invalid Position.");
    }
    if (flag == 1)
    {
        for (i = n - 1; i >= k; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[k - 1] = num;
        printf("\n\n\nNew Array is:");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}