//calculate area of the circle
#include<stdio.h>
#include<math.h>
#define pi 3.14
    float main(){
        float radius,area;
        printf("enter radius of the circle : ");
        scanf("%f",&radius);
        area = pi*pow(radius,2);
        printf("area of the circle is %f",area);
        return 0;
    }