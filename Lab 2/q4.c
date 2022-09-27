// Given an unsorted array of size n, WAP to find and display the number of elements between two elements a and b (both inclusive). E.g. Input : arr = [1, 2, 2, 7, 5, 4], a=2 and b=5, Output : 4 and the numbers are: 2, 2, 7, 5.
#include <stdio.h>
int main()
{
    int n, i, a, b, c = 0;
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
    printf("\nEnter Lower Limit Element: ");
    scanf("%d", &a);
    printf("\nEnter Upper Limit Element: ");
    scanf("%d", &b);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == a || arr[i] == b)
        {
            c++;
        }

        if (arr[i] > a && arr[i] < b)
        {
            c++;
        }
    }
    printf("Number of elements in between two elements (Both Inclusive) = %d", c);
    return 0;
}