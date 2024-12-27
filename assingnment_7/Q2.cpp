#include <iostream>

using namespace std;

class Vehicle {
protected:
    string brand;

public:
    Vehicle(string b) : brand(b) {}

    void displayBrand() {
        cout << "Brand: " << brand << endl;
    }
};

class Car : public Vehicle {
protected:
    int speed;

public:
    Car(string b, int s) : Vehicle(b), speed(s) {}

    void displaySpeed() {
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

class ElectricCar : public Car {
private:
    int batteryLife;

public:
    ElectricCar(string b, int s, int bl) : Car(b, s), batteryLife(bl) {}

    void displayElectricCarInfo() {
        displayBrand();
        displaySpeed();
        cout << "Battery Life: " << batteryLife << " hours" << endl;
    }
};

int main() {
    ElectricCar eCar("Tesla", 150, 24);
    eCar.displayElectricCarInfo();

    return 0;
}
