#include<stdio.h>
typedef int i;
int main(){
    i a;
    printf("enter a no. : ");
    scanf("%d",&a);
    printf("a+=1 : %d\n", a+=1);
    printf("a-=3 : %d\n",a-=3);
    printf("a*=2 : %d\n",a*=2);
    printf("a/=2 : %d\n",a/=2);
    printf("a    : %d\n",a=534);
}