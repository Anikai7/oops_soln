#include <iostream>

class Item {
private:
    static int count;  
    int number; 

public:

    void getdata(int a) {
        number = a;
        count++; 
    }

    static void getcount() {
        std::cout << "Current count: " << count << std::endl;
    }
};

int Item::count = 0;

int main() {

    Item a, b, c;

    a.getdata(5);
    Item::getcount();

    b.getdata(10);
    Item::getcount();

    c.getdata(15);
    Item::getcount();

    return 0;
}
