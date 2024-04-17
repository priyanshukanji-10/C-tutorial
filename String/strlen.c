#include <stdio.h>

int strlength(char *p);
int main()
{

    char string[50];
    printf("Enter string:");
    fgets(string, 50, stdin);
    int length = strlength(string);
    printf("Lenth of the string is:%d", length);
}

int strlength(char p[])
{
    int count = 0;
    for (int i = 0; *(p + i) != '\0'; i++)
    {
        count++;
    }
    return (--count);
}