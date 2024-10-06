#include<iostream>

using namespace std;

class Rectangle{

    private:
        int length;
        int width;
    
    public:

        Rectangle(): length(0),width(0){}

        Rectangle(int l,int w): length(l),width(w){}

        Rectangle(Rectangle &r){
            length = r.length;
            width = r.width;
        }

        void perimenter(){
            cout<<(2*length)+(2*width)<<endl;
        }

        void area(){
            cout<<length*width<<endl;
        }
};

int main(){
    Rectangle R1,R2(2,2);
    Rectangle R3(R2);

    R1.perimenter();
    R2.perimenter();
    R3.perimenter();

    R1.area();
    R2.area();
    R3.area();

    return 0;
}