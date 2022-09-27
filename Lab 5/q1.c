#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
} * start, *last;
void createList(int n);
void display_first();
void display_end();

int main()
{
    int n, ch;
    start = NULL;
    last = NULL;
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &n);
    createList(n);
    printf("\nPress 1 to display list from First");
    printf("\nPress 2 to display list from End\n");
    printf("Press 3 for Exit\n");
    scanf("%d", &ch);
    while (1)
    {
        if (ch == 1)
        {
            display_first();
        }
        else if (ch == 2)
        {
            display_end();
        }
        else if (ch == 3)
        {
            exit(0);
        }
        printf("\nPress 1 to display list from First");
        printf("\nPress 2 to display list from End\n");
        printf("Press 3 for Exit\n");
        scanf("%d", &ch);
    }
    return 0;
}
void createList(int n)
{
    int i, data;
    struct node *newNode;
    if (n >= 1)
    {
        start = (struct node *)malloc(sizeof(struct node));
        if (start != NULL)
        {
            printf("Enter data of 1 node: ");
            scanf("%d", &data);
            start->data = data;
            start->prev = NULL;
            start->next = NULL;
            last = start;
            for (i = 2; i <= n; i++)
            {
                newNode = (struct node *)malloc(sizeof(struct node));
                if (newNode != NULL)
                {
                    printf("Enter data of %d node: ", i);
                    scanf("%d", &data);
                    newNode->data = data;
                    newNode->prev = last;
                    newNode->next = NULL;
                    last->next = newNode;
                    last = newNode;
                }
                else
                {
                    printf("Memory cannot be allocated.");
                    break;
                }
            }
            printf("\nDouble linked list created\n");
        }
        else
        {
            printf("Memory cannot be allocated.");
        }
    }
}
void display_first()
{
    struct node *temp;
    int n = 1;
    if (start == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = start;
        printf("\n\nData in List:\n");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            n++;
            temp = temp->next;
        }
    }
}
void display_end()
{
    struct node *temp;
    int n = 0;
    if (last == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = last;
        printf("\n\nData in List:\n");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            n++;
            temp = temp->prev;
        }
    }
}