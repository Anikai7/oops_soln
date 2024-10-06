#include<iostream>

using namespace std;

class A{

    private:
        int x;
    
    protected:
        int y;
    
    public:

        A():x(1),y(2){}

        friend class B;

};

class B{

    public:
        void display(A &a){
            cout<<a.x<<" "<<a.y<<endl;
        }

};

int main(){
    A a1;
    B b1;
    b1.display(a1);

    return 0;
}
