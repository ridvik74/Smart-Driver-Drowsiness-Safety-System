#include <stdio.h>

#define MAX 50

int q[MAX];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if(rear == MAX - 1)
    {
        printf("Queue is full\n");
        return;
    }

    if(front == -1)
        front = 0;

    rear++;
    q[rear] = x;
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Processed event: %d\n", q[front]);
    front++;
}

void display()
{
    int i;

    for(i = front; i <= rear; i++)
        printf("%d ", q[i]);
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);

    printf("Safety Events: ");
    display();

    printf("\n");
    dequeue();

    return 0;
}
