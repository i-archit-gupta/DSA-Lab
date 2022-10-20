// WAP to check the palindrome using double ended queue.
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int queue[MAX];
int front = -1, rear = -1;
void ins(int);
void display();
void palindrome();
int main()
{
    int ch, val;
    while (1)
    {
        printf("\n\n1. Insert\n2. Display\n3. Check palindrome\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the value to be inserted: ");
            scanf("%d", &val);
            ins(val);
            break;
        case 2:
            display();
            break;
        case 3:
            palindrome();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice");
        }
    }
    return 0;
}
void ins(int val)
{
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        printf("Queue Overflow");
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (rear == MAX - 1 && front != 0)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    queue[rear] = val;
}
void display()
{
    int i;
    if (front == -1)
    {
        printf("Queue is empty");
        return;
    }
    printf("Queue elements are:\n");
    if (front <= rear)
    {
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
    else
    {
        for (i = front; i < MAX; i++)
            printf("%d ", queue[i]);
        for (i = 0; i <= rear; i++)
            printf("%d ", queue[i]);
    }
}
void palindrome()
{
    int i, j, flag = 0;
    if (front == -1)
    {
        printf("Queue is empty");
        return;
    }
    if (front <= rear)
    {
        for (i = front, j = rear; i <= j; i++, j--)
        {
            if (queue[i] != queue[j])
            {
                flag = 1;
                break;
            }
        }
    }
    else
    {
        for (i = front, j = rear; i < MAX && j >= 0; i++, j--)
        {
            if (queue[i] != queue[j])
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
        printf("Not a palindrome");
    else
        printf("Palindrome");
}