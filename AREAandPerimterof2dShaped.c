#include<stdio.h>
int main(){
    float Length,Breadth,Side,Radius,Perimter1,Perimeter2,Area1,Area2,Circumference,Area3;
    printf("Enter your value of Length of Rectangle:");
    scanf("%f",&Length);
    printf("Enter your value of Breadth of Rectangle:");
    scanf("%f",&Breadth);
    printf("Enter your value of Side of Square:");
    scanf("%f",&Side);
    printf("Enter your Value of Radius of circle:");
    scanf("%f",&Radius);
    Perimter1=2*(Length+Breadth);
    Area1=(Length*Breadth);
    Perimeter2=4*Side;
    Area2=Side*Side;
    Circumference=2*22/7*Radius;
    Area3=22/7*Side*Side;
    printf("Your Perimeter of Rectangle is %f \n",Perimter1);
    printf("Your Area of Rectangle is %f \n",Area1);
    printf("Your Perimter of Square is : %f \n",Perimeter2);
     printf("Your Area of Circle is : %f \n",Area2);
    printf("Your Circumference of Circle is %f  \n",Circumference);
    printf("Your Area of Circle is %f \n ",Area3);
    return 0;
}