#include<stdio.h>
void main(){
    int i,n,a,b,c;
    printf("enter a and b : ");
    scanf("%d\t%d",&a,&b);
    printf("enter terms of series : ");
    scanf("%d",&n);
    printf("%d\t%d",a,b);
    for(i=2;i<=n;i++){
            c=a+b;
            printf("\t%d",c);
            a=b;
            b=c;
    }
}