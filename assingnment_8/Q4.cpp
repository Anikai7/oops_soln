#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    void add(int a, double b) {
        cout << "Adding int and double: " << a + b << endl;
    }

    void add(double a, int b) {
        cout << "Adding double and int: " << a + b << endl;
    }

    void add(float a, float b) {
        cout << "Adding float and float: " << a + b << endl;
    }
};

class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks" << endl;
    }

    void fetch() {
        cout << "Dog fetches the ball" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat meows" << endl;
    }

    void scratch() {
        cout << "Cat scratches" << endl;
    }
};

int main() {
    Calculator calc;
    
    cout << "Adding integers: " << calc.add(5, 3) << endl;
    cout << "Adding doubles: " << calc.add(2.5, 3.5) << endl;
    
    calc.add(5, 3.5);  
    calc.add(2.5, 3);  
    
    float f1 = 1.2, f2 = 2.3;
    calc.add(f1, f2);  

    Animal* animalPtr;

    Dog dog;
    animalPtr = &dog;
    animalPtr->speak();  

    Cat cat;
    animalPtr = &cat;
    animalPtr->speak();  

    animalPtr = &dog;

    Dog* dogPtr = &dog;
    dogPtr->fetch();  

    animalPtr = &cat;

    Cat* catPtr = &cat;
    catPtr->scratch();  

    return 0;
}
