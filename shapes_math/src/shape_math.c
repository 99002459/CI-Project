
#include "shape_math.h"
#include "operation.h"

#define pi 3.14

int rectangle_area(int len_rect, int bred_rect)
{
      return len_rect*bred_rect;
}
int rectangle_peri(int len_rect, int bred_rect)
{
      return 2*(len_rect+bred_rect);
}

int circle_area(int radius)
{
     return pi*radius*radius;
}

int circle_peri(int radius)
{
     return 2*pi*radius;
}
int square_area(int side)
{
     return side*side;
}

int square_peri(int side)
{    
    return 4*side;
}
int triangle_area(int side1,int side2, int side3)
{
    int semi,prod,area;
    semi=(side1+side2+side3)/2;
    prod=semi*(semi-side1)*(semi-side2)*(semi-side3); 
    area=sqrt(prod);
    return area;
}
int triangle_peri(int side1,int side2, int side3)
{
    return side1+side2+side3;
}
