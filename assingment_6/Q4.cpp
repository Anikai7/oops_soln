#include<iostream>

using namespace std;

class Rectangle{

    private:
        float width;
        float higth;
    
    public:

        void setDimension(float width,float heigth){
            this->higth = heigth;
            this->width = width;
        }

        void printDimension(){
            cout<<"Height: "<<this->higth<<endl
                <<"Width: "<<this->width<<endl;
        }


};

int main(){

    return 0;
}