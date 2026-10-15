
#include <stdio.h>

int events[100];
int front = -1;
int rear = -1;

void addEvent(int value)
{
    if (rear == 99)
    {
        printf("Queue is full\n");
        return;
    }

    if (front == -1)
        front = 0;

    rear++;
    events[rear] = value;
}

void showEvents()
{
    int i;

    if (front == -1)
    {
        printf("No events in queue\n");
        return;
    }

    for (i = front; i <= rear; i++)
        printf("%d ", events[i]);

    printf("\n");
}
