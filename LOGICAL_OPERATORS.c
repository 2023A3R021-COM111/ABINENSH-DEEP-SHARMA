#include<stdio.h>
int main(){
    int DIG1,DIG2;
    printf("Enter Your numbers:=\n");
    scanf("%d",&DIG1);
    scanf("%d",&DIG2);
    printf("Logical and (&&): %d\n",(DIG1-10<10)&&(DIG2)); //If the type of both are same it treat them true ireespective
                                                 //whether they are equal or not {only true if both conditions are True
                                                 //Try to use Relational operands on both sides of && to get better understandings
    printf("Logical or (||): %d\n",(DIG1>5)||(DIG2>10));// If One is True and Other is False and True it will Give True overall                          

    return 0;

}