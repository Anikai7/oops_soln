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

class B : virtual public A {
public:
    B(int val) : A(val) {}
};

class C : virtual public A {
public:
    C(int val) : A(val) {}
};

class D : public B, public C {
public:
    D(int valB, int valC) : B(valB), C(valC), A(valC) {}

    void display() {
        cout << "Data from A (using virtual inheritance from B and C): " << A::data << endl;
    }
};

int main() {
    D obj(10, 20);
    obj.display();
    return 0;
}
