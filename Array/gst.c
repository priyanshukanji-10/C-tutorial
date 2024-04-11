#include <stdio.h>

int main()
{
    float price[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter price of item %d: ", i + 1);
        scanf("%f", (price + i));
    }
    for (int i = 0; i < 3; i++)
    {
        float fPrice = *(price + i) + (0.18 * (*(price + i)));
        printf("Final price of item %d with GST is: %.2f\n", (i + 1), fPrice);
    }
    return 0;
}
