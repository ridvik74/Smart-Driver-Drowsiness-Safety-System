
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void addHistory(int val)
{
    struct node *newnode;
    struct node *temp;

    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
        return;

    newnode->data = val;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newnode;
    }
}

void showHistory()
{
    struct node *temp = head;

    if (head == NULL)
    {
        printf("No history available\n");
        return;
    }

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}
