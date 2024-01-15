#include<iostream>
#include<math.h>
using namespace std;

class cosx {
public:
    void cos1(){
        float pi = 3.141592;
        float ang, radian, result1 = 0, total = 0;
        
        cout << "Enter the value of angle in degrees: ";
        cin >> ang;
        radian = (pi * ang) / 180;
        int j = 0, i = 1;
        int fact = 1;
        
        if( ang==0||ang==90)
        { if(ang==0){
            cout <<"cos" << ang << " = 1";
                    
                    }
            else {
                cout <<"cos" << ang << " = 0";
            }
        }
        else {
        while( j < 7 ) {
            
            
            while(i <= (2 * j) ) {
                fact *= i;
                i++;
            }

            result1 = (pow((-1), j) * pow(radian, (2 * j))) / fact;
            total += result1;

            j++;
        }
        total = total-total*0.000001;

        cout <<"cos" << ang << " = " << total;
    }
}
};

int main() {
    cosx obj;
    obj.cos1();
    return 0;
}

