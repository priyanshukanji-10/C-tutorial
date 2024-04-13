#include <stdio.h>

void main()
{
    int star[] = {7, 8, 9};
    int *ptr = &star[1];
    ptr++;
    printf("%d", *ptr);
}
/*
In pointer arithmatic pointer increment and decrement is allowed.
And addintion and substraction is allowed;
in case of substraction it stores no of datatype can be stored.
*/