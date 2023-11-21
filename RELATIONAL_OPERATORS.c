#include<stdio.h>
int main(){
    int DIG1,DIG2;
    printf("Enter Your numbers:=\n");
    scanf("%d",&DIG1);
    scanf("%d",&DIG2);
    //True Statement gives = 1
    //False Statement Gives = 0
    //It works Left to Right
    printf("greater than= %d\n",DIG1<DIG2);
    printf("less Than or Equal= %d\n",DIG1<=DIG2);
    printf("greater than or equal= %d\n",DIG1>=DIG2);
    printf("equal to %d\n",DIG1==DIG2); //used to show if Two Expressions Have same Value
    printf("not equal to %d\n",DIG1!=DIG2);   
    return 0;

}