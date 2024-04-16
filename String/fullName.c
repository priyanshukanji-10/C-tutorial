#include <stdio.h>
void inputString(char *);
void main()
{
    char fullName[50];
    printf("Enter your full name:");
    inputString(fullName);
    printf("Your full name is ");
    puts(fullName);
    // int count = 0;
    // for (int i = 0; fullName[i] != '\0'; i++)
    // {
    //     count++;
    // }
    // printf("The string's length is %d", count - 1);
}

void inputString(char p[])
{
    char ch;
    int i;
    for (i = 0; ch != '\n'; i++)
    {
        if (i == 49)
        {
            break;
        }
        else
        {
            scanf("%c", &ch);
            *(p + i) = ch;
        }
    }
    *(p + i) = '\0';
}