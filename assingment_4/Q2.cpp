#include<iostream>

using namespace std;

class Rectangle{
    private:
        double length;
        double width;
    
    public:
        void setDimension(double,double);
        void displayDimension();
        double calculateArea(const Rectangle&);
        
};

void Rectangle::setDimension(double l,double w){
    length = l;
    width = w;
}

void Rectangle::displayDimension(){
    cout<<length<<endl
        <<width<<endl;
}

double Rectangle::calculateArea(const Rectangle& rect){
    return (rect.length)*(rect.width);
}

int main(){

    Rectangle R1,R2;

    R1.setDimension(2,3);
    R2.setDimension(3,4);

    R1.displayDimension();

    double area =R1.calculateArea(R2);

    cout<<area<<endl;

    return 0;

}