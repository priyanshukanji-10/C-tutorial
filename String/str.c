#include <stdio.h>
void strrev(char p[])
{
    if (*p != '\0')
    {
        strrev(p + 1);
        putchar(*p);
    }
}
int main()
{
    char s[12];
    scanf("%[^\n]s", s);
    strrev(s);
    printf("\n");
    puts(s);
}
