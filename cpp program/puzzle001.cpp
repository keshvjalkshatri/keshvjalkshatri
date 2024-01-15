#include<iostream>
using namespace std;

class p1 {
    int p;  // Member variables should be declared, but no need to initialize here
public:
    p1() : p(1000) {}  // You can initialize 'p' in the constructor initializer list

    void sum(int a) {
        cout << "sum: " << p + a << endl;
    }
};

int main() {
    p1 s;
    s.sum(5);
    return 0;
}
