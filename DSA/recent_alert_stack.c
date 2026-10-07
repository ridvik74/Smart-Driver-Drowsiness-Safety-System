#include <stdio.h>

#define MAX 50

int stack[MAX];
int top = -1;

void push(int x)
{
    if(top == MAX - 1)
    {
        printf("Stack is full\n");
        return;
    }

    top++;
    stack[top] = x;
}

void pop()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Removed alert: %d\n", stack[top]);
    top--;
}

void peek()
{
    if(top == -1)
    {
        printf("No recent alert\n");
        return;
    }

    printf("Latest alert: %d\n", stack[top]);
}

void display()
{
    int i;

    for(i = top; i >= 0; i--)
        printf("%d ", stack[i]);
}

int main()
{
    push(1);
    push(2);
    push(3);

    printf("Recent Alerts: ");
    display();

    printf("\n");
    peek();

    return 0;
}
