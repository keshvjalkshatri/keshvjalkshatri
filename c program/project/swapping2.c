#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter value of a and b : ");
    scanf("%d %d",&a,&b);
    b=&a;
    a=&b;
    printf(" a : %d, b : $d",a,b);
}