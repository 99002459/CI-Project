#include<stdio.h>
#include "shape_math.h"

int main()
{
    int number,len,bred,side,rad,side1,side2,side3;
    float rect_area, rect_peri, circ_peri, circ_area,sqr_area,sqr_peri,tri_area, tri_peri;
    printf("Menu:\n");
    printf("1. Calculating area of Rectangle\n");
    printf("2. Calculations on Square\n");
    printf("3. Calculations on Circle\n");
    printf("4. Calculations on Triangle\n");    
    printf("Select option from the menu: \n");
    
    
    scanf("%d",&number);
    if((number>0)&&(number<6))
    { 
       switch(number)
        {
        case 1:
            scanf("%d %d",&len,&bred);
            rect_area=rectangle_area(len,bred);
            rect_peri=rectangle_peri(len,bred);    
            break;
        case 2:
            scanf("%d",&side);
            sqr_area=square_area(side); 
            sqr_peri=square_peri(side);
            break;
        case 3:
            scanf("%d",&rad);
            circ_area=circle_area(rad);
            circ_peri=circle_peri(rad);
            break;
        case 4:
            scanf("%d %d %d",&side1,&side2,&side3);
            tri_area=triangle_area(side1,side2,side3);
            tri_peri=triangle_peri(side1,side2,side3);
            break;
       default:
            printf("\nWrong input");
            break;

      }
    
}
