#include <stdio.h>

void printData(int);

struct student
{
    int rollNo;
    char name[60];
} data[3];

int main()
{
    int i;
    for (i = 0; i < 3; i++)
    {
        data[i].rollNo = i + 1;
        printf("Enter student name: ");
        gets(data[i].name);
    }

    int s;
    printf("Enter roll no: ");
    scanf("%d", &s);
    printData(s);

    return 0;
}

void printData(int s)
{
    int i;
    int flag = 0;

    for (i = 0; i < 3; i++)
    {
        if (data[i].rollNo == s)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Student found!!\n");
        printf("Name of the student with roll no %d is: %s\n", data[i].rollNo, data[i].name);
    }
    else
    {
        printf("Student not found!!\n");
    }
}
