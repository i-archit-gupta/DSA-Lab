// WAP to remove duplicates from the Array.
#include <stdio.h>
int main()
{
    int n, i, j, k, flag = 0;
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
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                j--;
                n--;
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        printf("\n\nThe New array removing duplicates is: ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
        printf("No Duplicate Element found.");
    return 0;
}