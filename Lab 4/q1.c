// Write a menu driven program to perform the following operations on a single linked list.
// 1. Create
// 2. Traverse
// 3. Insert node at the beginning
// 4. Insert node at the nth position
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *start = NULL;
void create();
void traverse();
void ins_first_pos();
void main()
{
    int ch, n = 1;
    printf("1. Create Linked List\n2.Display List\n3.Insert node at the beginning\n4.Exit");
    scanf("%d", &ch);
    while (n == 1)
    {
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            traverse();
            break;
        case 3:
            ins_first_pos();
            break;
        case 4:
            exit(0);
            break;
        }
        printf("\nPress 1 to continue or 0 to Exit\n");
        scanf("%d", &n);
        if (n == 0)
        {
            exit(0);
        }
        printf("1. Create Linked List\n2.Display List\n3.Insert node at the beginning\n4.Exit\n");
        scanf("%d", &ch);
    }
}
void create()
{
    int p;
    printf("Enter Data:");
    scanf("%d", &p);
    struct node *t;
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = p;
    n->next = NULL;
    if (start == NULL)
    {
        start = n;
    }
    else
    {
        t = start;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = n;
    }
}
void traverse()
{
    struct node *t = start;
    while (t != NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }
}
void ins_first_pos()
{
    int q;
    printf("Enter Data: ");
    scanf("%d", &q);
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = q;
    n->next = start;
    start = n;
}