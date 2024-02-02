#include <iostream>
using namespace std;
int main() {
    try {
      
        cout << "Enter the numerator: ";
        int numerator;
        cin >> numerator;

        cout << "Enter the denominator: ";
        int denominator;
        cin >> denominator;
       if (denominator == 0) {
            throw runtime_error("Error: Division by zero is not allowed.");
        }
        int result = numerator / denominator;
        cout << "Result: " << result << endl;
    }
    catch (const exception& e) {
    cerr << "An error occurred: " << e.what() << endl;
    }
    
    return 0;
}
