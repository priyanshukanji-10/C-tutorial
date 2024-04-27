#include <stdio.h>

void twoSum(int *, int, int, int *);

int main()
{
    int n;
    printf("Enter static boundary:");
    scanf("%d", &n);

    int a[n], i;
    int b[2];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int target;
    printf("Enter target digit: ");
    scanf("%d", &target);
    twoSum(a, target, n, b);
    if (b[0] != -1 && b[1] != -1)
    {
        printf("Indices: %d, %d\n", b[0], b[1]);
    }
    else
    {
        printf("No two elements sum up to the target.\n");
    }
}

void twoSum(int p[], int target, int n, int q[])
{
    int i, j, sum;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            sum = p[i] + p[j];
            if (sum == target)
            {
                q[0] = i;
                q[1] = j;
                return;
            }
        }
    }
    q[0] = -1;
    q[1] = -1;
}
