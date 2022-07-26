// WAP to find out the sum of the numbers stored in an array of integers.
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the no. of elements you want in an array: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("The sum of the elements of the array is : %d", sum);
    return 0;
}