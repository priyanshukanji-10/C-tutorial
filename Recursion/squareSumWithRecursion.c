#include <stdio.h>
int sqSumm(int);
int main()
{
    int num;
    printf("Square and sum of first n natural numbers\n eg. 1^2+2^2+.....+n^2 \n");

    printf("Enter number:");
    scanf("%d", &num);
    int sum = sqSumm(num);
    printf("Sum is :%d", sum);
}
int sqSumm(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sumNm1 = sqSumm(n - 1);
    int sumN = sumNm1 + (n * n);
    return sumN;
}
