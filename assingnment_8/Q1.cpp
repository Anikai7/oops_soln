#include <iostream>
using namespace std;

class Base {
public:
    int publicVar;    // Public member
protected:
    int protectedVar; // Protected member
private:
    int privateVar;   // Private member

public:
    // Constructor to initialize the members
    Base(int pub, int prot, int priv) 
        : publicVar(pub), protectedVar(prot), privateVar(priv) {}

    // Public method to display values
    void display() {
        cout << "Public: " << publicVar << ", Protected: " << protectedVar << ", Private: " << privateVar << endl;
    }

    // Public getter for privateVar (to access private member outside the class)
    int getPrivateVar() {
        return privateVar;
    }
};

// Derived class with public inheritance
class DerivedPublic : public Base {
public:
    DerivedPublic(int pub, int prot, int priv) : Base(pub, prot, priv) {}

    void accessMembers() {
        // Accessing members in the derived class
        cout << "In DerivedPublic - Accessing base class members:" << endl;
        cout << "Public Var: " << publicVar << endl;      // Accessible
        cout << "Protected Var: " << protectedVar << endl; // Accessible
        // cout << "Private Var: " << privateVar << endl;   // Error: private member not accessible

        // Access private member using public getter
        cout << "Private Var (using getter): " << getPrivateVar() << endl; // Accessible through getter
    }
};

// Derived class with protected inheritance
class DerivedProtected : protected Base {
public:
    DerivedProtected(int pub, int prot, int priv) : Base(pub, prot, priv) {}

    void accessMembers() {
        // Accessing members in the derived class
        cout << "In DerivedProtected - Accessing base class members:" << endl;
        cout << "Public Var: " << publicVar << endl;      // Accessible
        cout << "Protected Var: " << protectedVar << endl; // Accessible
        // cout << "Private Var: " << privateVar << endl;   // Error: private member not accessible

        // Access private member using public getter
        cout << "Private Var (using getter): " << getPrivateVar() << endl; // Accessible through getter
    }
};

// Derived class with private inheritance
class DerivedPrivate : private Base {
public:
    DerivedPrivate(int pub, int prot, int priv) : Base(pub, prot, priv) {}

    void accessMembers() {
        // Accessing members in the derived class
        cout << "In DerivedPrivate - Accessing base class members:" << endl;
        cout << "Public Var: " << publicVar << endl;      // Accessible
        cout << "Protected Var: " << protectedVar << endl; // Accessible
        // cout << "Private Var: " << privateVar << endl;   // Error: private member not accessible

        // Access private member using public getter
        cout << "Private Var (using getter): " << getPrivateVar() << endl; // Accessible through getter
    }
};

int main() {
    // Create instances of derived classes
    DerivedPublic dp(10, 20, 30);
    DerivedProtected dProt(40, 50, 60);
    DerivedPrivate dPriv(70, 80, 90);

    // Access members within the derived classes
    dp.accessMembers();
    dProt.accessMembers();
    dPriv.accessMembers();

    // Accessing members from outside the derived class (Main function)
    cout << "\nAccessing members from main function:" << endl;
    cout << "In DerivedPublic object (dp):" << endl;
    cout << "Public Var: " << dp.publicVar << endl; // Accessible
    // cout << "Protected Var: " << dp.protectedVar << endl; // Error: protected member not accessible
    // cout << "Private Var: " << dp.privateVar << endl;     // Error: private member not accessible

    // Access private member using getter (works because it's public)
    cout << "Private Var (using getter from main): " << dp.getPrivateVar() << endl;

    return 0;
}
