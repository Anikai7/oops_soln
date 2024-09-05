#include <iostream>

using namespace std;

class student
{
private:
    string name;
    int rollno;
    string degree;
    string hostel;
    float cgpa;

public:
    void addDetails()
    {
        cout << "Enter Name: ";
        getline(cin,name);
        cout << "Enter rollno.: ";
        cin >> rollno;
        cout << "Enter degree: ";
        cin >> degree;
        cout << "Enter hostel: ";
        cin >> hostel;
        cout << "Enter cgpa: ";
        cin >> cgpa;
    }

    void updateDetails()
    {
        cout << "Enter new Name: ";
        cin >> name;
        cout << "Enter new rollno.: ";
        cin >> rollno;
        cout << "Enter new degree: ";
        cin >> degree;
        cout << "Enter new hostel: ";
        cin >> hostel;
        cout << "Enter new cgpa: ";
        cin >> cgpa;
    }

    void updateCGPA()
    {
        cout << "Enter new CGPA: ";
        cin >> cgpa;
    }

    void updateHostel()
    {
        cout << "Enter new Hostel: ";
        cin >> hostel;
    }

    void showDetails()
    {
        cout << "Name: " << name << endl;
        cout << "rollno.: " << rollno << endl;
        cout << "degree: " << degree << endl;
        cout << "hostel: " << hostel << endl;
        cout << "cgpa: " << cgpa << endl;
    }
};

int main()
{
    student s1;

    s1.addDetails();
    s1.showDetails();
    s1.updateDetails();
    s1.showDetails();

    return 0;
}