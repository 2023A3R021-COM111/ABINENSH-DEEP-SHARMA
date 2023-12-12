#include<stdio.h>
int main()
{
    if (!printf("Hello\t"))
    {
        printf("Hello");
    }
    else
    {
        printf("World");
    }
    return 0;
}