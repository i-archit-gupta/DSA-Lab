// WAP to find out the sum of the numbers stored in an array of integers.
#include <stdio.h>
int main()
{
    int arr[5], i, sum;
    printf("Enter 5 values of the array:\n\n");
    for (i = 0; i < 5; i++)
    {
        printf("Value at index %d\n", i);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("The sum of the elements of the array is : %d", sum);
}