#include<iostream>
#include<math.h>
using namespace std;
class si{
    public : void si1(){
        float pi = 3.141592;
        float x,radian,result1,total,n;
        cout<<"enter the value of (sinx) x : ";
        cin>>x;
        int fact=1;
        n = 50+x;
        radian = (pi)*(x/180);
        
        for(int i=1;i<14;i+=2)
        {   
            fact = fact*i;
            for(int j=0;j<7;j++)
            {
                result1 = (((pow((-1),j))*(pow(radian,((2*j)+1))))/fact);
                total = result1+total;
            }
        }
        cout<<"sin"<<x<<" = "<<total;
        cout<<"\n"<<n;


    }
};
int main() {
    si o;
    o.si1();
    return 0;
}