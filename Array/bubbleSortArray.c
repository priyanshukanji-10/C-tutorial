#include <stdio.h>

void bubbleSortDecending(int *, int);
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

    bubbleSort(array, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(array + i));
    }
    printf("\n");

    return 0;
}

void bubbleSort(int p[], int n)
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

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
