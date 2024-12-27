#include <iostream>

using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n) : name(n) {}

    void displayPersonInfo() {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
protected:
    int rollNo;

public:
    Student(string n, int r) : Person(n), rollNo(r) {}

    void displayStudentInfo() {
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Employee : public Person {
protected:
    int employeeID;

public:
    Employee(string n, int id) : Person(n), employeeID(id) {}

    void displayEmployeeInfo() {
        cout << "Employee ID: " << employeeID << endl;
    }
};

class WorkingStudent : public Student, public Employee {
public:
    WorkingStudent(string n, int r, int id) : Person(n), Student(n, r), Employee(n, id) {}

    void displayWorkingStudentInfo() {
        displayPersonInfo();
        displayStudentInfo();
        displayEmployeeInfo();
    }
};

int main() {
    WorkingStudent ws("Alice", 101, 1001);
    ws.displayWorkingStudentInfo();

    return 0;
}
