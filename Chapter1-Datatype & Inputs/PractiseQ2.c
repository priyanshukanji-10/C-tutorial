// Write a programme to calculate the area a of a given circle.
#include <stdio.h>
int main()
{
    float radius;
    printf("Enter the radius of the circle");
    scanf("%f", &radius);
    float Area = 3.14 * radius * radius;
    printf("Area of the circle is %f", Area);
    return 0;
}
