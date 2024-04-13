#include <stdio.h>
int main()
{
    int a, b;
    a = 50;
    b = 12;
    int sum = a + b;
    int sub = a - b;
    int multiplication = a * b;
    int division = a / b;
    int modulas = a % b;
    /*
    This all are arithmatic operators
    Here "+" is addition,
    "-" is substraction,
    "*" is multiplication,
    "/" is division
    & "%" is modulus operator. This operator returns the reminder in the division. This operator is applicable on integer values only.

    */
    fprintf(stdout, "The sum is %d \n Sub is %d \n multiplication is %d \n division is %f \n Modulus is %d", sum, sub, multiplication, division, modulas);
}