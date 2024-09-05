#include <iostream>

using namespace std;

class temperature{
    private:
        float tem;
        
    public:
        
        void getCelsius(){
            cout<<"Enter the tem in C: ";
            cin>>tem;
        }
        
        void toFahrenheit(){
            tem = (9*(tem)/5)+32;
        }
        
        void displayFrenheit(){
            cout<<"The tem in F: "<<tem;
        }
    
};

int main() {
    // Write C++ code here
    temperature t1;
    
    t1.getCelsius();
    t1.toFahrenheit();
    t1.displayFrenheit();

    return 0;
}