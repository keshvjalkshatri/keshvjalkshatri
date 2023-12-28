#include<stdio.h>
#include<conio.h>
int main(){
    int a,b;
    printf("ENTER TWO NO. : ");
    scanf("%d %d",&a,&b);
    printf("a&b : %d\n",a&b);
    printf("a|b : %d\n",a|b);
    printf("~a : %d\n",~a);
    printf("a^b : %d\n",a^b);
    printf("a>>2 : %d\n",a>>2);
    printf("b<<2 : %d",b<<2);
    return 0;
}