#include <stdio.h>
int factorial(int n);

int main()
{
    int num;
    printf("Factorial with recursion:\n");

    printf("Enter number:");
    scanf("%d", &num);

    int fact = factorial(num);
    printf("Factorial of %d is :%d", num, fact);
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int factNm1 = factorial(n - 1);
    int factN = factNm1 * n;
}