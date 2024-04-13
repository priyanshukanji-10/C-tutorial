#include <stdio.h>
void swap(int *, int *);

void main()
{
    int a = 4, b = 7;
    swap(&a, &b);
    printf("printing from main:\n a = %d\tb = %d\n", a, b); // using callbyRef function call makes the main variable actually change its values permanently
}
void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
    printf("printing form swap:\n a = %d\tb = %d\n", *p, *q);
}