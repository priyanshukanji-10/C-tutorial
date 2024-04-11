#include <stdio.h>

int main()
{
    int star[] = {7, 8, 9};
    int *ptr = star;
    ptr++;
    printf("%d", *ptr);
    return 0;
}
