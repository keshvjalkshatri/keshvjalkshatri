#include<iostream>
using namespace std;
class APbody
{
    public : void ap1(){
        int a,d,b,n;
        cout << "enter first terms of ap : ";
        cin>>a;
        cout << "enter common differece of a series : ";
        cin >>d;
        cout <<"enter term of the series : ";
        cin>>n;
        cout <<"series is : \n"<<a<<"\t";
        for (int i=2;i<=n;i++)
        {   int s = i-1;
            b=a+(s*d);
            cout<<b<<"\t";
        }
        cout<<"\nthe last term is : "<<b;
    }
    
};
int main(){
    APbody oj;
    oj.ap1();
    
    return 0;
}