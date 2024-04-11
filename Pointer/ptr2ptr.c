#include <stdio.h>

void main()
{
    // syntax if pointer to pointer
    float price = 99.99;
    float *ptr = &price;
    float **pptr = &ptr;

    // Now printing price only using pptr

    printf("%f", **(pptr));
}