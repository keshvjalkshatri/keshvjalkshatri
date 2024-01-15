#include<iostream>
#include<math.h>
using namespace std;
    class a{
        public : void main (){
        float radius,area,pi = 3.14;
        cout<<"enter radius of the circle: ";
        cin>>radius;
        area = pi*pow(radius,2);
        cout<<"area of the circle is: "<<area;
    }
    };
    int main(){
        a obj;
        obj.main();
        return 0;

    }