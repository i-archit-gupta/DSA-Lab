// Implement a circular queue using a menu driven program with functions:
// 1. insion
// 2. Deletion
// 3. disp
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int cq[MAX];
int front = -1;
int rear = -1;

void disp();
void ins(int item);
int del();
int isFull();
int isEmpty();
int main()
{
        int choice, item;
        while (1)
        {
                printf("\n1.Insert\n");
                printf("2.Delete\n");
                printf("3.Display\n");
                printf("4.Quit\n");
                printf("\nEnter your choice : ");
                scanf("%d", &choice);

                switch (choice)
                {
                case 1:
                        printf("\nInput the element for insion : ");
                        scanf("%d", &item);
                        ins(item);
                        break;
                case 2:
                        printf("\nElement deleted is : %d\n", del());
                        break;
                case 3:
                        disp();
                        break;
                case 4:
                        exit(0);
                default:
                        printf("\nWrong choice\n");
                }
        }

        return 0;
}

void ins(int item)
{
        if (isFull())
        {
                printf("\nQueue Overflow\n");
                return;
        }
        if (front == -1)
                front = 0;

        if (rear == MAX - 1)
                rear = 0;
        else
                rear = rear + 1;
        cq[rear] = item;
}

int del()
{
        int item;
        if (isEmpty())
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }
        item = cq[front];
        if (front == rear)
        {
                front = -1;
                rear = -1;
        }
        else if (front == MAX - 1)
                front = 0;
        else
                front = front + 1;
        return item;
}

int isEmpty()
{
        if (front == -1)
                return 1;
        else
                return 0;
}

int isFull()
{
        if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
                return 1;
        else
                return 0;
}
void disp()
{
        int i;
        if (isEmpty())
        {
                printf("\nQueue is empty\n");
                return;
        }
        printf("\nQueue elements :\n");
        i = front;
        if (front <= rear)
        {
                while (i <= rear)
                        printf("%d ", cq[i++]);
        }
        else
        {
                while (i <= MAX - 1)
                        printf("%d ", cq[i++]);
                i = 0;
                while (i <= rear)
                        printf("%d ", cq[i++]);
        }
        printf("\n");
}