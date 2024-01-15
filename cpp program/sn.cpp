#include<iostream>
using namespace std;
class APbody
{
    public : void ap1(){
        int a,d,b;
        float n;
        cout << "enter first terms of ap : ";
        cin>>a;
        cout << "enter common differece of a series : ";
        cin >>d;
        cout <<"enter term of the series : ";
        cin>>n;
        
        for (int i=2;i<=n;i++)
        {   int s=i-1;
            b=a+(s*d);
        }
        float n1,n2,sn;
        n1=n/2;
        n2=a+b;
        
        sn = n1*n2;
        cout<<"sum of "<<n<<"th number of term is : "<<sn;
    }
    
};
int main(){
    APbody oj;
    oj.ap1();
    
    return 0;
}