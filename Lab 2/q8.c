// Let A be nXn square matrix. WAP by using appropriate user defined functions for the following:
// a) Find the number of nonzero elements in A.
// b) Find the sum of the elements above the leading diagonal.
// c) Display the elements below the minor diagonal.
// d) Find the product of the diagonal elements.
#include <stdio.h>

void NonZeroElements(int (*Arr)[5], int n)
{
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (*(*(Arr + i) + j) != 0)
            {
                a++;
            }
        }
    }
    printf("Number of non-zero elements present in the array is: %d\n", a);
}

void SumAboveLeadingDiagonal(int (*Arr)[5], int n)
{
    int a;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i)
            {
                a += *(*(Arr + i) + j);
            }
        }
    }
    printf("Sum Of Elements Above Leading Diagonal: %d\n", a);
}

void ElementsBelowMinorDiagonal(int (*Arr)[5], int n)
{
    printf("Elements below the minor diagonal: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= n - i)
                printf(" %d", *(*(Arr + i) + j));
            else
                printf("   ");
        }
        printf("\n");
    }
}

void ProductOfdiagonalElements(int (*Arr)[5], int n)
{
    int a = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                a *= *(*(Arr + i) + j);
        }
    }
    printf("Product of leading diagnal Elements: %d\n", a);
}

int main()
{
    int i,j,n=5;
    int arr[5][5];
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Enter the element of %d row %d column: ",i+1,j+1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    printf("The array is: \n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    NonZeroElements(arr, n);
    SumAboveLeadingDiagonal(arr, n);
    ElementsBelowMinorDiagonal(arr, n);
    ProductOfdiagonalElements(arr, n);
}