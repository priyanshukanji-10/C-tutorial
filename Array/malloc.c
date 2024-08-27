#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    p = (int *)malloc(7 * sizeof(int)); // 4byte allocate.
    int i;
    for (i = 0; i < 7; i++)
    {
        scanf("%d", p + i);
    }
    for (i = 0; i < 7; i++)
    {
        printf("%d", *(p + i));
    }
}