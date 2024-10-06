#include <iostream>

using namespace std;

class XYZ;

class ABC {
    private:
        int numA;

    public:
        ABC(int a) : numA(a) {}

        friend int add(const ABC&, const XYZ&);
};

class XYZ {
    private:
        int numB; 

    public:
        XYZ(int b) : numB(b) {}

        friend int add(const ABC&, const XYZ&);
};

int add(const ABC& objA, const XYZ& objB) {

    return objA.numA + objB.numB;
}

int main() {

    ABC objABC(10);
    XYZ objXYZ(20);

    int sum = add(objABC, objXYZ);
    cout << "The sum of numA and numB is: " << sum << endl;

    return 0;
}
