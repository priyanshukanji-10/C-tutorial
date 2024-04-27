#include <stdio.h>

void swap(int *, int *);
void sortRev(int *, int);

int main()
{
    int n;
    printf("Enter static boundary:");
    scanf("%d", &n);

    int a[n];

    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void sortRev(int p[], int n)
{
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// toDo :Finish this program