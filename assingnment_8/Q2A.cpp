#include <iostream>
using namespace std;

class A {
public:
    int data;
    A(int val) : data(val) {}

    void display() {
        cout << "Data in A: " << data << endl;
    }
};

class B : public A {
public:
    B(int val) : A(val) {}
};

class C : public A {
public:
    C(int val) : A(val) {}
};

class D : public B, public C {
public:
    D(int valB, int valC) : B(valB), C(valC) {}

    void display() {
        // Ambiguity in accessing `data` from both B and C (since both inherit from A)
        // To resolve ambiguity, we need to specify which base class to access the `data` member
        cout << "Data from B: " << B::data << endl;  // Accessing `data` from class B
        cout << "Data from C: " << C::data << endl;  // Accessing `data` from class C
    }
};

int main() {
    D obj(10, 20);
    obj.display();
    return 0;
}

