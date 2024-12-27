#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream file;

    file.open("story.txt", ios::out);
    if (!file.is_open()) {
        cerr << "Unable to open file for writing" << endl;
        return 1;
    }
    
    file << "Once upon a time, there was a brave knight. The knight fought "
         << "many battles and won many victories. But one day, the knight "
         << "faced a dragon. The knight was afraid, but with great courage, "
         << "the knight defeated the dragon and saved the kingdom.";
    
    file.close();

    file.open("story.txt", ios::in | ios::out);
    if (!file.is_open()) {
        cerr << "Unable to open file for read/write" << endl;
        return 1;
    }

    string word;
    long pos = 0;
    bool found = false;

    while (file >> word) {
        if (word == "afraid,") {
            found = true;
            pos = file.tellg(); 
            pos -= word.length() + 1; 
            file.seekp(pos, ios::beg);
            file << "determined"; 
            break;
        }
    }

    if (!found) {
        cout << "The word 'afraid' was not found in the story." << endl;
    } else {
        cout << "The word 'afraid' was replaced with 'determined'." << endl;
    }

    file.close();

    file.open("story.txt", ios::in);
    if (!file.is_open()) {
        cerr << "Unable to open file for reading" << endl;
        return 1;
    }

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();

    return 0;
}
