#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void calculateArea() = 0;
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}

    void calculateArea() override {
        float area = 3.14 * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }

    void specificCircleMethod() {
        cout << "This is a Circle-specific method." << endl;
    }
};

class Rectangle : public Shape {
private:
    float length, width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}

    void calculateArea() override {
        float area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }

    void specificRectangleMethod() {
        cout << "This is a Rectangle-specific method." << endl;
    }
};

int main() {
    Shape* shapePtr;

    Circle circle(5);
    shapePtr = &circle;
    shapePtr->calculateArea();

    Rectangle rectangle(10, 4);
    shapePtr = &rectangle;
    shapePtr->calculateArea();

    Circle* circlePtr = &circle;
    circlePtr->specificCircleMethod();

    Rectangle* rectPtr = &rectangle;
    rectPtr->specificRectangleMethod();

    return 0;
}
