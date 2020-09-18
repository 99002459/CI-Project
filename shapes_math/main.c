#include<stdio>
#include "shape_math.h"

int main()
{
    int number;
    printf("Menu:\n");
    printf("1. Calculations on Rectangle\n");
    printf("2. Calculations on Square\n");
    printf("3. Calculations on Circle\n");
    printf("4. Calculations on Triangle\n");
    printf("5. Exit\n");
    printf("Select option from the menu: \n");
     __fpurge(stdin);
    scanf("%d", &number);

    if(EXIT == number)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(number>0 && number<8)
    {

    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;

    }

}
