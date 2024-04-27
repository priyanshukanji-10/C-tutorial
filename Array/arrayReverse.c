#include <stdio.h>

void arrRev(int *, int);
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

    arrRev(a, n);
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}

void arrRev(int p[], int n)
{
    int i;
    for (i = 0; i < n / 2; i++)
    {
        int temp = *(p + i);
        *(p + i) = *(p + n - i - 1);
        *(p + n - i - 1) = temp;
    }
}