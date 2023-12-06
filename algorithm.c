#include<stdio.h>
int main()
{
    //converting farenhite into celcius
    float F,C;
    printf("enter the value of f: ");
    scanf("%f",&F);
    C=5.0/9.0*(F-32);
    printf("temperature in c: %f",C);
    return 0;
}