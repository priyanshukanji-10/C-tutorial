// Write a programme to calculate the area a of a given sqare.

#include <stdio.h>
int main()
{
    int side;
    printf("Enter value of Side of the sqare\n");
    scanf("%d", &side);
    int area = side * side;
    printf("The area of the sqare is %d", area);
    return 0;
}