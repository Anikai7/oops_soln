#include <iostream>

using namespace std;

class Engineer {
protected:
    string engField;

public:
    Engineer(string field) : engField(field) {}

    void displayEngineerInfo() {
        cout << "Engineering Field: " << engField << endl;
    }
};

class Manager {
protected:
    int teamSize;

public:
    Manager(int size) : teamSize(size) {}

    void displayTeamInfo() {
        cout << "Team Size: " << teamSize << endl;
    }
};

class TechManager : public Engineer, public Manager {
public:
    TechManager(string field, int size) : Engineer(field), Manager(size) {}

    void displayTechManagerInfo() {
        displayEngineerInfo();
        displayTeamInfo();
    }
};

int main() {
    TechManager techManager("Software Engineering", 10);
    techManager.displayTechManagerInfo();

    return 0;
}
