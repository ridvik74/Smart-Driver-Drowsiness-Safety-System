
#include <stdio.h>

int alerts[100];
int top = -1;

void push(int value)
{
    if (top == 99)
    {
        printf("Stack is full\n");
        return;
    }

    top++;
    alerts[top] = value;
}

void showAlerts()
{
    int i;

    if (top == -1)
    {
        printf("No alerts\n");
        return;
    }

    for (i = top; i >= 0; i--)
        printf("%d ", alerts[i]);

    printf("\n");
}
