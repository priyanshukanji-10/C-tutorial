#include <stdio.h>

int removeDuplicates(int[], int);

int main()
{

    int n;
    printf("Enter no of element in array:");
    scanf("%d", &n);
    int a[n];
    // read array
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

int removeDuplicates(int a[], int n)
{
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = i; i < n; i++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            }
        }
    }
}
