#include <iostream>

using namespace std;

class counter {
private:
    int n;

public:
    counter(int x = 0) : n(x) {}

    int operator++() {
        return ++n;
    }

    int operator++(int) {
        int temp = n;
        n++;
        return temp;
    }

    int operator--() {
        return --n;
    }

    int operator--(int) {
        int temp = n;
        n--;
        return temp;
    }
};

int main() {
    counter c(5);

    cout << "Pre-increment: " << ++c << endl;
    cout << "Post-increment: " << c++ << endl;
    cout << "Pre-decrement: " << --c << endl;
    cout << "Post-decrement: " << c-- << endl;

    return 0;
}
