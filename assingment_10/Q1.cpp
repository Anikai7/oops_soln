#include <iostream>

using namespace std;

int main() {
    string name;
    
    cout << "Enter your full name: " << endl;
    getline(cin, name);

    float num1, num2, num3;

    cout << "Enter three decimal numbers: " << endl;
    cin >> num1 >> num2 >> num3;

    cout.width(10);
    cout << right << num1 << endl;

    cout.width(10);
    cout.precision(3);
    cout << right << num2 << endl;

    cout.width(10);
    cout.precision(6);
    cout << right << num3 << endl;

    return 0;
}
