#include<iostream>
#include<math.h>
using namespace std;
class gp_body{
    
    float a,r,b,n;
    public: void gp1(){
        cout<<"\n";
        cout<<"enter first term of gp    :";
        cin>>a;
        cout<<"enter ratio of a series   :";
        cin>>r;
        cout<<"enter terms of the series :";
        cin>>n;
        int i=2;
        do{
            b=a*(pow(r,(i-1)));
            i++;
        }
        while(i<=n); 
        float sn;
        sn = (a*((pow(r,n)-1)))/(r-1);
        cout<<"sum of "<<n<<"th terms of gp series : "<<sn;
}
    
};
int main(){
    gp_body oj;
    oj.gp1();
    return 0;
}