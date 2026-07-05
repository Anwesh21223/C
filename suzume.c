#include<stdio.h>
int main()
{
    int a , b, sum;
    printf(" Okay so we are going to take two inputs from you and give you the sum as output\n");
    printf(" I want you too input your first number:");
    scanf("%d",&a);
    printf(" \n Okay. Similarly i want you to input any other number: ");
    scanf("%d",&b);
    sum= a+b;
    printf(" The sum of the two inputs are: %d \n",sum);
    return 0;
}