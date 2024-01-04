#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3;
    printf("Enter value of num1 : ");
    scanf("%d",&num1);
    printf("Enter value of num2 : ");
    scanf("%d",&num2);
    num3=num1;
    num1=num2;
    num2=num3;
    printf("num1 : %d , num2 : %d",num1,num2);

}