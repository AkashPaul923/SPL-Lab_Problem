//Find area and circumference of triangle

#include <stdio.h>
#include <math.h>
int main()
{
 float s, a, b, c, area;
 printf("Enter the values of a, b and c:");
 scanf("%f %f %f", &a, &b, &c);
 s = (a + b + c) / 2;
 area = sqrt(s * (s - a) * (s - b) * (s - c));
 printf("Area of a triangle = %f \n", area);
 return 0;
}
