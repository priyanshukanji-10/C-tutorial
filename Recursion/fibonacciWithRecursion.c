#include <stdio.h>

int fib(int);

int main()
{
    int num;
    printf("Fibonacci series with recursion:\n");
    printf("Enter number:");
    scanf("%d", &num);

    int result = fib(num);
    if (result == -1)
    {
        printf("Invalid input!! Fibonacci series is not defined for negative numbers.\n");
    }
    else
    {
        printf("Fibonacci of %d is: %d\n", num, result);
    }

    return 0;
}

int fib(int n)
{
    if (n < 0)
    {
        return -1;
    }

    if (n == 0 || n == 1)
    {
        return n;
    }

    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}
