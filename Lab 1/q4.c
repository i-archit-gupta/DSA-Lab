//.WAP Input N element into an array.find out sum of all even number and multiply all odd no.
#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the no. of elements you want in an array: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    return 0;
}