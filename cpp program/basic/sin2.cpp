#include<iostream>
#include<math.h>
using namespace std;

class si{
public:
    void si1(){
        float pi = 3.141592;
        float x, radian, result1 = 0, total = 0;
        
        cout << "Enter the value of (sinx) x in degrees: ";
        cin >> x;

        // Convert degrees to radians
        radian = (pi * x) / 180;

        for(int j = 0; j < 7; j++) {
            int fact = 1;
            
            for(int i = 1; i <= (2 * j + 1); i++) {
                fact *= i;
            }

            result1 = (pow((-1), j) * pow(radian, (2 * j + 1))) / fact;
            total += result1;
        }

        cout << "sin" << x << " = " << total;
    }
};

int main() {
    si o;
    o.si1();
    return 0;
}
