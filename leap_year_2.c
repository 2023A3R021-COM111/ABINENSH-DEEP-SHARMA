#include<stdio.h>
int main()
{
    int year;
    //checking the year is leap year or not
    printf("enter the year: ");
        scanf("%d",&year);

        if((year%4==0 && year %100 !=00))
    {
        printf("the year is leap year");
    }
    else
    {
        printf("the year is not leap year");
    }
    
    return 0;
}