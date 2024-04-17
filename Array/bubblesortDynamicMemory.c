#include <stdio.h>
#include <stdlib.h>

void bubbleSortDecending(int *, int);
void bubbleSortAscending(int *, int);
void swap(int *, int *);

int main()

{
    int n;
    int *array;
    printf("Enter no of elements:");
    scanf("%d", &n);
    array = (int *)malloc(n * sizeof(int));
    if (array == '\0')
    {
        printf("Memory allocation failed.\n");
    }
    else
    {

        printf("Memory allocation successfull dynamically using malloc.\n");

        for (int i = 0; i < n; i++)
        {
            scanf("%d", (array + i));
        }
        bubbleSortAscending(array, n);
        printf("Sorted array: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", *(array + i));
        }
        printf("\n");
    }
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