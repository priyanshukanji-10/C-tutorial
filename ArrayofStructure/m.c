// write a function to print the data of a student whose roll-no is given.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    int roll;
    char name[10];
    int yr;
    char dept[5];
    char course[10];
};
struct student ob[3];
void search(int r)
{
    int i;
    for (i = 0; i < 8; i++)
    {
        if (ob[i].roll == r)
        {
            printf("%s\n", ob[i].name);
            printf("%s\n", ob[i].dept);
            printf("%s\n", ob[i].course);
            printf("%d\n", ob[i].yr);
        }
    }
}
int main()
{
    ob[0].roll = 2;
    strcpy(ob[0].name, "Rohan");
    strcpy(ob[0].dept, "IT");
    strcpy(ob[0].course, "Btech");
    ob[0].yr = 2023;
    ob[1].roll = 5;
    strcpy(ob[1].name, "Aine");
    strcpy(ob[1].dept, "CSE");
    strcpy(ob[1].course, "Btech");
    ob[1].yr = 2022;
    ob[2].roll = 7;
    strcpy(ob[2].name, "Kaira");
    strcpy(ob[2].dept, "CSDS");
    strcpy(ob[2].course, "Btech");
    ob[2].yr = 2023;
    search(5);
    return (0);
}