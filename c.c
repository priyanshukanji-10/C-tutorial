#include <stdio.h>

int main()
{
    int *p[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%x \n", &p[i]);
    }
}