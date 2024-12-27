#include <iostream>

using namespace std;

int main() {

    char character = 'A';
    int charAsInt = character;  
    cout << "Character: " << character << endl;
    cout << "Character as int (ASCII value): " << charAsInt << endl;

    double i = 4.20;
    int truncatedPi = static_cast<int>(i); 
    cout << "Double value: " << i << endl;
    cout << "Double as int (truncated): " << truncatedPi << endl;

    const int originalValue = 42;
    int* modifiedValue = const_cast<int*>(&originalValue); 
    *modifiedValue = 100;
    cout << "Original const int value (after modification): " << originalValue << endl;
    cout << "Modified value using const_cast: " << *modifiedValue << endl;

    return 0;
}

