#include <iostream>
using namespace std;

#define MAX 50

int q[MAX];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if(rear == MAX - 1)
    {
        cout << "Queue is full" << endl;
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
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Processed event: " << q[front] << endl;
    front++;
}

void display()
{
    if(front == -1 || front > rear)
    {
        cout << "Queue is empty" << endl;
        return;
    }

    for(int i = front; i <= rear; i++)
    {
        cout << q[i] << " ";
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);

    cout << "Safety Events: ";
    display();

    cout << endl;

    dequeue();

    return 0;
}
