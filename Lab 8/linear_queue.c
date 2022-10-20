// Implement a linear queue using a menu driven program with functions:
// 1. Insertion
// 2. Deletion
// 3. Display
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
void insert();
void delete ();
void display();
int lq[MAX];
int rear = -1;
int front = -1;
int main()
{
    int choice;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong choice \n");
        } /* End of switch */
    }     /* End of while */
} /* End of main() */

void insert()
{
    int add_item;
    if (rear == MAX - 1)
        printf("Queue Overflow \n");
    else
    {
        if (front == -1)
            /*If queue is initially empty */
            front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        lq[rear] = add_item;
    }
} /* End of insert() */

void delete ()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow \n");
        return;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", lq[front]);
        front = front + 1;
    }
} /* End of delete() */

void display()
{
    int i;
    if (front == -1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", lq[i]);
        printf("\n");
    }
}