#include <stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("_age is:%d\n", *ptr); // Here * is the value at address ... So it takes value of the variable's address stored in it.
    printf("_age is:%d\n", *(&age));

    // Printing pointers
    // Hexa-decimals
    printf("%p\n", &age);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    // Unsigned integers
    printf("%u\n", &age);
    printf("%u\n", ptr);
    printf("%u\n", &ptr);
}