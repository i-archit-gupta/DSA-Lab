// WAP to create an array that can store max. 50 integers and display the contents of the array.
#include <stdio.h>
int main()
{
    int arr[50], n, i;
    printf("How many elements do you want to enter ? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("Elements of the array are:\n\n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d is:%d\n", i + 1, arr[i]);
    }

    return 0;
}
