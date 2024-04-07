#include <stdio.h>
int sum(int);
int main()
{

    int num;
    printf("Enter range of n natural nums:");
    scanf("%d", &num);
    int ans = sum(num);
    printf("Answer:%d", ans);
}
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int sumNm1 = sum(n - 1);
    int sumN = sumNm1 + n;
    return sumN;
}