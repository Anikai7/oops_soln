#include<iostream>

using namespace std;

class complex{

    private:
        int real,img;

    public:

        complex(int x=0,int y=0): real(x),img(y) {};

        complex operator+ (const complex &c1) const{
            
            return complex(real+c1.real,img+c1.img);
        }

        complex operator- (complex &c1){
            
            return complex(real-c1.real,img-c1.img);
        }

        complex operator/ (complex &c1){
            
            return complex(real/c1.real,img/c1.img);
        }

        complex operator* (complex &c1){
            
            return complex((real*c1.real)-(img*c1.img),(real*c1.img)+(img*c1.real));
        }

        complex operator% (complex &c1){
            
            return complex(real%c1.real,img%c1.img);
        }

        bool operator== (complex &c1){
            
            if(real != c1.real){
                return false; 
            }else if(img != c1.img){
                return false;
            }

            return true;
        }

        void display(){
            cout<<real<<" +i"<<img<<endl;
        }
};

int main(){

    complex c1(1,2),c2(3,4);
    c1.display();
    c2.display();

    complex c3 = c1%c2;

    c3.display();

    return 0;
}