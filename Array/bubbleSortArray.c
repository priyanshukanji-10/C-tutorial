#include <stdio.h>

void bubbleSort(int *);
void swap(int *, int *);

int main()
{
    int array[5];

    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d element: ", (i + 1));
        scanf("%d", (array + i));
    }

    bubbleSort(array);

    printf("Sorted array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(array + i));
    }
    printf("\n");

    return 0;
}

void bubbleSort(int p[])
{
    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
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
