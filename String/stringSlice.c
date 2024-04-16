#include <stdio.h>
#include <string.h>

char *sliceString(char *, int, int);

int main()
{
    char string[200];
    int m, n;
    printf("Enter string for slicing:");
    fgets(string, 200, stdin);
    printf("Enter m:");
    scanf("%d", &m);

    printf("Enter n:");
    scanf("%d", &n);

    printf("String will be sliced from %dth to %dth index\n", m, n);
    printf("Sliced string is : %s", sliceString(string, m, n));
    return 0;
}

char *sliceString(char p[], int m, int n)
{
    static char newStr[150];
    int j = 0;
    if (n < m)
    {
        strcpy(newStr, "Invalid index values \n Please recheck!!");
    }
    else
    {
        for (int i = m; i <= n; i++)
        {
            newStr[j++] = p[i];
        }
        newStr[j] = '\0';
    }

    // Null terminate the new string
    return newStr;
}
