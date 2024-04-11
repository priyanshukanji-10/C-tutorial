#include <stdio.h>
void swap(int, int);
void main()
{
    int a = 4, b = 7;
    swap(a, b);
    printf("printing from main:\n a = %d\tb = %d\n", a, b); // In call by value actual value of the variable is'nt changed... copy of the original variable is passed.
}
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("printing form swap:\n a = %d\tb = %d\n", a, b);
}