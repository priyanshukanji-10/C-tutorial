#include <stdio.h>
// ! function Declarations
int strlength(char *);
void strReverse(char *, int n);
void swap(char *, char *);
int main()
{

    char string[90];
    printf("Enter string:");
    fgets(string, 50, stdin);
    int stringLength = strlength(string);
    strReverse(string, stringLength);
    printf("Reversed String is:%s", string);
}
// * Strlength calculates no of chars in a string
int strlength(char p[])
{
    int count = 0;
    for (int i = 0; *(p + i) != '\0'; i++)
    {
        count++;
    }
    return (--count);
}
// * strReverse reverses given string.
void strReverse(char p[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap((p + i), (p + n - i));
    }
}
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
// toDo :Do the same with malloc /calloc