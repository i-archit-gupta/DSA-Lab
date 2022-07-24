// WAP to search a particular number from the array.
#include <stdio.h>
int main()
{
    int n, k, i;
    printf("Enter the no. of elements you want in an array: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The elements of the array are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\nEnter the number you wish to search from the array: ");
    scanf("%d", &k);
    for (i = 0; i < n; i++)
    {
        if (k == arr[i])
        {
            printf("The element given is found at Position %d.", i + 1);
            return 0;
        }
    }
    printf("Element is not found.");
    return 0;
}