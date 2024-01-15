#include <iostream>
using namespace std;

int main() {
    char character;

    // Input a character
    cout << "Enter a character: ";
    cin >> character;

    // Display ASCII code
    cout << "ASCII code of '" << character << "' is: " << int(character) << endl;

    return 0;
}
