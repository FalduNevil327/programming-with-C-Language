#include <stdio.h>
void main()
{
float area, h, b;
printf("Enter value of h, b: ");
scanf("%f%f", &h, &b);
area = 0.5 * h * b;
printf("Area of Triangle = %f\n", area);
}