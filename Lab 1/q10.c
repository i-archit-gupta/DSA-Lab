// WAP to store numbers into an array of n integers, where the array must contain some duplicates.Find out the most repeating element in the array.
#include <stdio.h>
int main()
{
    int n, i, j, c = 0, max_c = 0, max_e, flag = 0;
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
        c = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                c++;
                if (c > max_c)
                {
                    flag = 1;
                    max_c = c;
                    max_e = arr[i];
                }
            }
        }
    }
    if (flag == 1)
    {
        printf("\n\nThe most occuring element in the array is: %d ", max_e);
    }
    else
        printf("There is no recurring element in the array.");
    return 0;
}