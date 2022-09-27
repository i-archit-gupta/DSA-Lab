// WAP to arrange the elements of a array such that all even numbers are followed by all odd numbers.
#include <stdio.h>
void swap(int *a, int *b);
void seperate(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        while (arr[left] % 2 == 0 && left < right)
            left++;

        while (arr[right] % 2 == 1 && left < right)
            right--;

        if (left < right)
        {
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}
void swap(int *a, int *b)
{
    int temp;
    temp= *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n,i;
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
    printf("\n");
    seperate(arr, n);

    printf("Array after segregation: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}