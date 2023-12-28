#include<stdio.h>
typedef int num;
int main(){
    num a,b;
    printf("enter value of a and b : ");
    scanf("%d %d",&a,&b);
    printf("a>b : %d\n",a>b?1:0);
    printf("a<b : %d",a<b?1:0);
    return a;
}