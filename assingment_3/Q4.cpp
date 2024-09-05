#include <iostream>
using namespace std;

class Example {
private:
    int data;

public:

    void setData(int value) {
        data = value;
    }

    void displayData() const {
        cout << "Data: " << data << endl;
    }

    Example returnObjectByValue() const {
        Example newObj;
        newObj.data = this->data + 10; 
        return newObj;
    }

    void modifyObjectByReference(Example &obj) const {
        obj.data += 20; 
    }
};

int main() {
    Example obj1;
    obj1.setData(5);
    cout << "Original object data:" << endl;
    obj1.displayData();

    Example obj2 = obj1.returnObjectByValue();
    cout << "Returned object data after modification:" << endl;
    obj2.displayData();

    obj1.modifyObjectByReference(obj1);
    cout << "Original object data after modification by reference:" << endl;
    obj1.displayData();

    return 0;
}
