#include <iostream>

using namespace std;

class Employee {
protected:
    string name;

public:
    Employee(string n) : name(n) {}

    void displayEmployeeInfo() {
        cout << "Employee Name: " << name << endl;
    }
};

class Developer : public Employee {
private:
    string programmingLanguage;

public:
    Developer(string n, string lang) : Employee(n), programmingLanguage(lang) {}

    void displayDeveloperInfo() {
        displayEmployeeInfo();
        cout << "Programming Language: " << programmingLanguage << endl;
    }
};

class Designer : public Employee {
private:
    string designTool;

public:
    Designer(string n, string tool) : Employee(n), designTool(tool) {}

    void displayDesignerInfo() {
        displayEmployeeInfo();
        cout << "Design Tool: " << designTool << endl;
    }
};

int main() {
    Developer dev("ani", "C++");
    Designer des("uidsgf", "Photoshop");

    cout << "Developer Details:" << endl;
    dev.displayDeveloperInfo();

    cout << "Designer Details:" << endl;
    des.displayDesignerInfo();

    return 0;
}
