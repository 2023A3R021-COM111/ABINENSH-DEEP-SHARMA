#include<stdio.h>
int myGetchar(void);
int main()
{
    int ch;
    printf("Enter a character: ");
    ch=myGetchar();
    printf("The character entered is: %c\n",ch);
    return 0;
}
int myGetchar(void)
{
    int c;
    c=getchar();
    return c;
}