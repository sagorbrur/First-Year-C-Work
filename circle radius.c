#include<stdio.h>
//#include<conio.h>
#define pi 3.14
void main()
{
    //clrscr();     //clear screen
    float radius,area;

    printf("enter the the radius of a circle: ");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("area of a circle:%f",area);
    //getch();
    return 0;
}
