// Write a program to add two matrices and display it using function.
#include <stdio.h>

void read_array(int m, int n, int (*mat)[10])
{
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", (*(mat + i) + j));
}

void print_array(int m, int n, int (*mat)[10])
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", (*(*(mat + i) + j)));
        }
        printf("\n");
    }
}

void add_matrix(int m, int n, int (*a)[10], int (*b)[10], int (*c)[10])
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            (*(*(c + i) + j)) = (*(*(a + i) + j)) + (*(*(b + i) + j));
        }
    }
}

void main()
{
    int a[10][10], b[10][10], c[10][10];
    int m, n, i, j;

    printf("Enter size of matrix:\n");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of matrix 'a' of size %d\n", (m * n));
    read_array(m, n, a);
    printf("Elements of matrix 'a':\n");
    print_array(m, n, a);

    printf("Enter the elements of matrix 'b' of size %d\n", (m * n));
    read_array(m, n, b);
    printf("Elements of matrix 'b':\n");
    print_array(m, n, b);

    add_matrix(m, n, a, b, c);
    printf("Sum of two matrix is:\n");
    print_array(m, n, c);
}