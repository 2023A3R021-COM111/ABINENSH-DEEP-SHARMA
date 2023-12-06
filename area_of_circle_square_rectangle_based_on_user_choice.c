#include<stdio.h>
int main()
{
    float length,breadth,side,radius,area,base,height;
    int choice;

    printf("1: area of circle\n");
    printf("2: area of rectangle\n");
    printf("3: area of square\n");
    printf("4: area of triangle\n");
    printf("enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {

    case 1:
    //area of circle
        printf("enter the value of radius: ");
            scanf("%f",&radius);
            area=3.14*radius*radius;
        printf("the area of circle is: %f\n",area);
    break;

    case 2:
    //area of rectangle
        printf("enter length of rectangle: ");
            scanf("%f",&length);
                printf("enter breadth of rectangle: ");
                scanf("%f",&breadth);
            area=length*breadth;
        printf("the area of rectangle is: %f\n",area);
    break;

    case 3:
        printf("enter the value of side of square: ");
            scanf("%f",&side);
            area=side*side;
        printf("area of square is: %f\n",area);
    break;

    case 4:
        printf("enter the base of triangle: ");
            scanf("%f",&base);
                printf("enter the value of height: ");
                scanf("%f",&height);
            area=0.5*base*height;
        printf("area of triangle is: %f\n",area);
    break;

    default:
    printf("enter a valid choice");

    }

    return 0;
}