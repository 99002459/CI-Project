
#include "shape_math.h"

#define pi 3.14159
float area, float perimeter;
int rectangle(int len_rect, int bred_rect)
{
   area=len_rect*bred_rect;
   perimeter=2*(len_rect+bred_rect);
   printf("Area of the rectangle= %d",area);
   printf("Perimeter of the rectangle= %d",perimeter);
   return 0;
}

int circle(int radius)
{
    area=pi*radius*radius;
    perimeter=2*pi*radius;
    printf("Area of the circle= %f",area);
    printf("Perimeter of the circle= %f",perimeter);
    return 0;
}

int square(int side)
{
    area=side*side;
    perimeter=4*side;
    printf("Area of the square= %d",area);
    printf("Perimeter of the square= %d",perimeter);
    return 0;

}

int triangle(int side1,int side2, int side3)
{
    int semi,prod;
    semi=(side1+side2+side3)/2;
    prod=semi*(semi-side1)*(semi-side2)*(semi-side3);
    area=sqrt(prod);
    perimeter=side1+side2+side3;
}
