#include <stdio.h>

int bigElem(int a[], int n);

int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int a[n];
    int i;
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }

    int l = bigElem(a, n);
    printf("Largest element: %d\n", l);
    return 0;
}

int bigElem(int p[], int n)
{
    int max;

    // Base case
    if (n == 1)
    {
        return p[0];
    }
    // Recursive case
    max = bigElem(p, n - 1);
    if (p[n - 1] > max)
    {
        return p[n - 1];
    }
    else
    {
        return max;
    }
}
