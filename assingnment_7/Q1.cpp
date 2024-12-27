#include <iostream>

using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void displayPersonalInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNo;

public:
    Student(string n, int a, int r) : Person(n, a), rollNo(r) {}

    void displayStudentInfo() {
        displayPersonalInfo();
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    Student student1("fiy", 20, 101);
    student1.displayStudentInfo();
    return 0;
}
