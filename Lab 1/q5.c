// WAP Input N element into an array.find out sum of all even number and multiply all odd no.
#include <stdio.h>
int main()
{
    int n, i, sum = 0, prod = 1;
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
    printf("\n");
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum = sum + arr[i];
        }
        else
        {
            prod = prod * arr[i];
        }
    }
    printf("The sum of all even numbers in the array is: %d\n", sum);
    printf("The product of all odd numbers in the array is: %d", prod);
    return 0;
}