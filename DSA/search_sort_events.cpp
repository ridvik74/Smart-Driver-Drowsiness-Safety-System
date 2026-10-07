#include <stdio.h>

void search(int a[], int n, int x)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            printf("Event found\n");
            return;
        }
    }

    printf("Event not found\n");
}

void sort(int a[], int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int a[5] = {3, 1, 4, 2, 5};
    int i;

    sort(a, 5);

    printf("Sorted Events: ");

    for(i = 0; i < 5; i++)
        printf("%d ", a[i]);

    printf("\n");

    search(a, 5, 4);

    return 0;
}
