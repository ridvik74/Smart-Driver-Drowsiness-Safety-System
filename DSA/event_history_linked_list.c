#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int event;
    struct Node *next;
};

struct Node *head = NULL;

void insertEnd(int x)
{
    struct Node *p;
    struct Node *q;

    p = (struct Node*)malloc(sizeof(struct Node));

    p->event = x;
    p->next = NULL;

    if(head == NULL)
    {
        head = p;
        return;
    }

    q = head;

    while(q->next != NULL)
        q = q->next;

    q->next = p;
}

void display()
{
    struct Node *p = head;

    while(p != NULL)
    {
        printf("%d ", p->event);
        p = p->next;
    }
}

int main()
{
    insertEnd(1);
    insertEnd(2);
    insertEnd(3);
    insertEnd(4);

    printf("Event History: ");
    display();

    return 0;
}
