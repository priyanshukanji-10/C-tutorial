#include <stdio.h>

void main()
{
    int array[5];

    printf("Give elements of array:\n");
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d element", (i + 1));
        scanf("%d", (array + i));
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d", *(array + i));
    }
}