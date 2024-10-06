#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int imag;

    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator*(int scalar) const {
        return Complex(real * scalar, imag * scalar);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

class ComplexOperations {
public:
    int operate(int a, int b) {
        return a + b;
    }

    int operate(int a, int b, int c) {
        return a + b + c;
    }

    int operate(int a, int b, bool multiply) {
        return a * b;
    }

    Complex operate(const Complex& c1, const Complex& c2) {
        return c1 + c2;
    }

    Complex operate(const Complex& c, int scalar) {
        return c * scalar;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    ComplexOperations ops;

    cout << "Sum of 5 and 10: " << ops.operate(5, 10) << endl;

    cout << "Sum of 5, 10, and 15: " << ops.operate(5, 10, 15) << endl;

    cout << "Product of 5 and 10: " << ops.operate(5, 10, true) << endl;

    Complex c3 = ops.operate(c1, c2);
    cout << "Sum of complex numbers: ";
    c3.display();

    Complex c4 = ops.operate(c1, 2);
    cout << "Product of complex number and integer: ";
    c4.display();

    return 0;
}
