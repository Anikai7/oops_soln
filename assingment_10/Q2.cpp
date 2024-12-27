#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream file;

    file.open("test.txt", ios::out);
    if (!file.is_open()) {
        cout << "Unable to open file for writing" << endl;
        return 1;
    }
    file.write("1 2 3 4 5", 9);
    file.close();

    char num1, num2;

    file.open("test.txt", ios::in | ios::out);
    if (!file.is_open()) {
        cout << "Unable to open file for read/write" << endl;
        return 1;
    }

    file.seekg(0, ios::beg);
    file.get(num1); // Read the first character

    int num = num1 - '0';
    int square = num * num;

    file.seekp(0, ios::beg);
    file << square; 


    file.seekg(-1, ios::end);
    file.get(num2); 

    num = num2 - '0';
    square = num * num;

    file.seekp(-1, ios::end);
    file << square;

    file.close();

    file.open("test.txt", ios::in);
    if (!file.is_open()) {
        cout << "Unable to open file for reading" << endl;
        return 1;
    }

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();

    return 0;
}

