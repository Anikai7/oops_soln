#include<iostream>

using namespace std;

class complex{
    private:
       int real;
       int imag;
    public:
        
        void set(float r,float i){
            real = r;
            imag = i;
            return;
        }

        void display(){
            cout<<real<<"+i"<<imag<<endl;
            return;
        }

        complex sum(complex c){
            complex tem;
            tem.real = real+c.real;
            tem.imag = imag+c.imag;

            return tem;
        }
};

int main(){
    complex c1,c2;

    c1.set(1,1);
    c1.display();
    c2.set(0,4);
    c2.display();

    complex s = c1.sum(c2);
    s.display();

    return 0;
}