#include <stdio.h>

void bubbleSortDecending(int *, int);
void bubbleSortAscending(int *, int);
void swap(int *, int *);

int main()
{
    int n;
    printf("Enter static boundary of the array:");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element no %d: ", (i + 1));
        scanf("%d", (array + i));
    }

    bubbleSortAscending(array, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(array + i));
    }
    printf("\n");

    bubbleSortDecending(array, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(array + i));
    }
    printf("\n");
    return 0;
}

void bubbleSortAscending(int p[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (p[j] > p[j + 1])
            {
                swap((p + j), (p + j + 1));
            }
        }
    }
}
void bubbleSortDecending(int p[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (p[j] < p[j + 1])
            {
                swap((p + j), (p + j + 1));
            }
        }
    }
}

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
