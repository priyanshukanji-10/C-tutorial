#include <stdio.h>

int main()
{
    // String is a char array which ends with \0(Null Charrecter.)
    // Taking input of string
    // For a single word string we can use scanf
    /*
    char firstName[50];
    printf("Enter your first name:");
     scanf("%s", firstName);
     printf("Your first name is %s", firstName);
    */
    //    But when it comes to multi word string we have to use fgets and puts.... gets is depreciated due to concerns tant it cant measures the no of char of the entered string.
    char fullName[50];
    printf("Enter your full name:");
    fgets(fullName, 50, stdin);
    printf("Your full name is ");
    puts(fullName);
    // Initialization
    // String is a charrecter array and so we can define it with char pointer... But fundamental diff b/w useing array notation and pointer notation that pointer notation string can be reinitialised but the array notation string can not be reinitialized
    char *myName = "Priyanshu";
    myName = "Kousik"; // Allowd because pointer's value can be changed
    char yourName[50] = "Kousik";
    // yourName="Priyanshu" Not allowed.
}
